package com.ayoubfletcher.protector

import android.content.Context

class Holder {

    external fun init(context: Context)

    companion object {

        val Instance by lazy {
            Holder()
        }

        init {
            System.loadLibrary("library")
        }
    }
}