package com.ayoubfletcher.protector

import android.app.Application

open class AppLib: Application() {
    override fun onCreate() {
        super.onCreate()

        Holder.Instance.init(this)
    }
}