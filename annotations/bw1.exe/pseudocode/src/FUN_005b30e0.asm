; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005b30e0(uint param_1)
;
;
; XREF[1]:
;   FUN_0050d220 at 0050d45f
;
; Referenced Globals:
;   void* PTR_GetKeyNameTextA_005d04c4 = 001d0b06
;   TerminatedCString s_Esc_005f9c90
;   undefined4 DAT_005f9c94
;   undefined4 DAT_005f9c96
;   undefined4 DAT_005f9c98
;   undefined4 DAT_005f9c9a
;   undefined4 DAT_005f9c9c
;   undefined4 DAT_005f9c9e
;   undefined4 DAT_005f9ca0
;   undefined4 DAT_005f9ca2
;   undefined4 DAT_005f9ca4
;   undefined4 DAT_005f9ca6
;   undefined4 DAT_005f9ca8
;   undefined4 DAT_005f9caa
;   TerminatedCString s_BackSpace_005f9cac
;   ... and 88 more
;
; Called Functions:
;   GetKeyNameTextA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b30e0
        ;   Label: FUN_005b30e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b30e1
    CMP EBX,0x200                       ; 005b30e5
    JL 0x005b312e                       ; 005b30eb
        ;   XREF to: 005b312e (CONDITIONAL_JUMP)  ; LAB_005b312e
    MOV EAX,EBX                         ; 005b30ed
        ;   Label: LAB_005b30ed
    CMP EBX,0x34                        ; 005b30ef
    JNC 0x005b335b                      ; 005b30f2
        ;   XREF to: 005b335b (CONDITIONAL_JUMP)  ; LAB_005b335b
    CMP EBX,0x19                        ; 005b30f8
    JNC 0x005b3596                      ; 005b30fb
        ;   XREF to: 005b3596 (CONDITIONAL_JUMP)  ; LAB_005b3596
    CMP EBX,0xc                         ; 005b3101
    JNC 0x005b3686                      ; 005b3104
        ;   XREF to: 005b3686 (CONDITIONAL_JUMP)  ; LAB_005b3686
    CMP EBX,0x6                         ; 005b310a
    JNC 0x005b36f3                      ; 005b310d
        ;   XREF to: 005b36f3 (CONDITIONAL_JUMP)  ; LAB_005b36f3
    CMP EBX,0x3                         ; 005b3113
    JNC 0x005b3724                      ; 005b3116
        ;   XREF to: 005b3724 (CONDITIONAL_JUMP)  ; LAB_005b3724
    CMP EBX,0x1                         ; 005b311c
    JC 0x005b3427                       ; 005b311f
        ;   XREF to: 005b3427 (CONDITIONAL_JUMP)  ; LAB_005b3427
    JA 0x005b3155                       ; 005b3125
        ;   XREF to: 005b3155 (CONDITIONAL_JUMP)  ; LAB_005b3155
    MOV EAX,0x5f9c90                    ; 005b3127 | = "Esc"
    POP EBX                             ; 005b312c
    RET                                 ; 005b312d
    MOV EAX,EBX                         ; 005b312e
        ;   Label: LAB_005b312e
    PUSH 0xc8                           ; 005b3130
    AND EAX,0x1ff                       ; 005b3135
    PUSH 0x2c9bda0                      ; 005b313a
    SHL EAX,0x10                        ; 005b313f
    PUSH EAX                            ; 005b3142
    CALL dword ptr CS:[0x5d04c4]        ; 005b3143 | PTR_GetKeyNameTextA_005d04c4
    TEST EAX,EAX                        ; 005b314a
    JLE 0x005b30ed                      ; 005b314c
        ;   XREF to: 005b30ed (CONDITIONAL_JUMP)  ; LAB_005b30ed
    MOV EAX,0x2c9bda0                   ; 005b314e
    POP EBX                             ; 005b3153
    RET                                 ; 005b3154
    MOV EAX,0x5f9c94                    ; 005b3155 | DAT_005f9c94
        ;   Label: LAB_005b3155
    POP EBX                             ; 005b315a
    RET                                 ; 005b315b
    MOV EAX,0x5f9c96                    ; 005b315c | DAT_005f9c96
        ;   Label: LAB_005b315c
    POP EBX                             ; 005b3161
    RET                                 ; 005b3162
    MOV EAX,0x5f9c98                    ; 005b3163 | DAT_005f9c98
        ;   Label: LAB_005b3163
    POP EBX                             ; 005b3168
    RET                                 ; 005b3169
    MOV EAX,0x5f9c9c                    ; 005b316a | DAT_005f9c9c
        ;   Label: LAB_005b316a
    POP EBX                             ; 005b316f
    RET                                 ; 005b3170
    MOV EAX,0x5f9c9e                    ; 005b3171 | DAT_005f9c9e
        ;   Label: LAB_005b3171
    POP EBX                             ; 005b3176
    RET                                 ; 005b3177
    MOV EAX,0x5f9ca2                    ; 005b3178 | DAT_005f9ca2
        ;   Label: LAB_005b3178
    POP EBX                             ; 005b317d
    RET                                 ; 005b317e
    MOV EAX,0x5f9ca4                    ; 005b317f | DAT_005f9ca4
        ;   Label: LAB_005b317f
    POP EBX                             ; 005b3184
    RET                                 ; 005b3185
    MOV EAX,0x5f9ca8                    ; 005b3186 | DAT_005f9ca8
        ;   Label: LAB_005b3186
    POP EBX                             ; 005b318b
    RET                                 ; 005b318c
    MOV EAX,0x5f9caa                    ; 005b318d | DAT_005f9caa
        ;   Label: LAB_005b318d
    POP EBX                             ; 005b3192
    RET                                 ; 005b3193
    MOV EAX,0x5f9cb6                    ; 005b3194 | DAT_005f9cb6
        ;   Label: LAB_005b3194
    POP EBX                             ; 005b3199
    RET                                 ; 005b319a
    MOV EAX,0x5f9cba                    ; 005b319b | DAT_005f9cba
        ;   Label: LAB_005b319b
    POP EBX                             ; 005b31a0
    RET                                 ; 005b31a1
    MOV EAX,0x5f9cbe                    ; 005b31a2 | DAT_005f9cbe
        ;   Label: LAB_005b31a2
    POP EBX                             ; 005b31a7
    RET                                 ; 005b31a8
    MOV EAX,0x5f9cc0                    ; 005b31a9 | DAT_005f9cc0
        ;   Label: LAB_005b31a9
    POP EBX                             ; 005b31ae
    RET                                 ; 005b31af
    MOV EAX,0x5f9cc4                    ; 005b31b0 | DAT_005f9cc4
        ;   Label: LAB_005b31b0
    POP EBX                             ; 005b31b5
    RET                                 ; 005b31b6
    MOV EAX,0x5f9cc6                    ; 005b31b7 | DAT_005f9cc6
        ;   Label: LAB_005b31b7
    POP EBX                             ; 005b31bc
    RET                                 ; 005b31bd
    MOV EAX,0x5f9cc8                    ; 005b31be | DAT_005f9cc8
        ;   Label: LAB_005b31be
    POP EBX                             ; 005b31c3
    RET                                 ; 005b31c4
    MOV EAX,0x5f9ccc                    ; 005b31c5 | DAT_005f9ccc
        ;   Label: LAB_005b31c5
    POP EBX                             ; 005b31ca
    RET                                 ; 005b31cb
    MOV EAX,0x5f9cce                    ; 005b31cc | DAT_005f9cce
        ;   Label: LAB_005b31cc
    POP EBX                             ; 005b31d1
    RET                                 ; 005b31d2
    MOV EAX,0x5f9cd2                    ; 005b31d3 | = "Enter"
        ;   Label: LAB_005b31d3
    POP EBX                             ; 005b31d8
    RET                                 ; 005b31d9
    MOV EAX,0x5f9cd8                    ; 005b31da | = "LeftCtrl"
        ;   Label: LAB_005b31da
    POP EBX                             ; 005b31df
    RET                                 ; 005b31e0
    MOV EAX,0x5f9ce3                    ; 005b31e1 | DAT_005f9ce3
        ;   Label: LAB_005b31e1
    POP EBX                             ; 005b31e6
    RET                                 ; 005b31e7
    MOV EAX,0x5f9ce5                    ; 005b31e8 | DAT_005f9ce5
        ;   Label: LAB_005b31e8
    POP EBX                             ; 005b31ed
    RET                                 ; 005b31ee
    MOV EAX,0x5f9ce9                    ; 005b31ef | DAT_005f9ce9
        ;   Label: LAB_005b31ef
    POP EBX                             ; 005b31f4
    RET                                 ; 005b31f5
    MOV EAX,0x5f9ceb                    ; 005b31f6 | DAT_005f9ceb
        ;   Label: LAB_005b31f6
    POP EBX                             ; 005b31fb
    RET                                 ; 005b31fc
    MOV EAX,0x5f9ced                    ; 005b31fd | DAT_005f9ced
        ;   Label: LAB_005b31fd
    POP EBX                             ; 005b3202
    RET                                 ; 005b3203
    MOV EAX,0x5f9cf1                    ; 005b3204 | DAT_005f9cf1
        ;   Label: LAB_005b3204
    POP EBX                             ; 005b3209
    RET                                 ; 005b320a
    MOV EAX,0x5f9cf3                    ; 005b320b | DAT_005f9cf3
        ;   Label: LAB_005b320b
    POP EBX                             ; 005b3210
    RET                                 ; 005b3211
    MOV EAX,0x5f9cf7                    ; 005b3212 | DAT_005f9cf7
        ;   Label: LAB_005b3212
    POP EBX                             ; 005b3217
    RET                                 ; 005b3218
    MOV EAX,0x5f9cf9                    ; 005b3219 | = "LeftShift"
        ;   Label: LAB_005b3219
    POP EBX                             ; 005b321e
    RET                                 ; 005b321f
    MOV EAX,0x5f9d03                    ; 005b3220 | DAT_005f9d03
        ;   Label: LAB_005b3220
    POP EBX                             ; 005b3225
    RET                                 ; 005b3226
    MOV EAX,0x5f9d05                    ; 005b3227 | DAT_005f9d05
        ;   Label: LAB_005b3227
    POP EBX                             ; 005b322c
    RET                                 ; 005b322d
    MOV EAX,0x5f9d07                    ; 005b322e | DAT_005f9d07
        ;   Label: LAB_005b322e
    POP EBX                             ; 005b3233
    RET                                 ; 005b3234
    MOV EAX,0x5f9d0b                    ; 005b3235 | DAT_005f9d0b
        ;   Label: LAB_005b3235
    POP EBX                             ; 005b323a
    RET                                 ; 005b323b
    MOV EAX,0x5f9d0d                    ; 005b323c | DAT_005f9d0d
        ;   Label: LAB_005b323c
    POP EBX                             ; 005b3241
    RET                                 ; 005b3242
    MOV EAX,0x5f9d0f                    ; 005b3243 | DAT_005f9d0f
        ;   Label: LAB_005b3243
    POP EBX                             ; 005b3248
    RET                                 ; 005b3249
    MOV EAX,0x5f9d13                    ; 005b324a | DAT_005f9d13
        ;   Label: LAB_005b324a
    POP EBX                             ; 005b324f
    RET                                 ; 005b3250
    MOV EAX,0x5f9d15                    ; 005b3251 | DAT_005f9d15
        ;   Label: LAB_005b3251
    POP EBX                             ; 005b3256
    RET                                 ; 005b3257
    MOV EAX,0x5f9d22                    ; 005b3258 | = "NumPad*"
        ;   Label: LAB_005b3258
    POP EBX                             ; 005b325d
    RET                                 ; 005b325e
    MOV EAX,0x5f9d2a                    ; 005b325f | = "LeftAlt"
        ;   Label: LAB_005b325f
    POP EBX                             ; 005b3264
    RET                                 ; 005b3265
    MOV EAX,0x5f9d38                    ; 005b3266 | = "CapsLock"
        ;   Label: LAB_005b3266
    POP EBX                             ; 005b326b
    RET                                 ; 005b326c
    MOV EAX,0x5f9d41                    ; 005b326d | DAT_005f9d41
        ;   Label: LAB_005b326d
    POP EBX                             ; 005b3272
    RET                                 ; 005b3273
    MOV EAX,0x5f9d47                    ; 005b3274 | DAT_005f9d47
        ;   Label: LAB_005b3274
    POP EBX                             ; 005b3279
    RET                                 ; 005b327a
    MOV EAX,0x5f9d4a                    ; 005b327b | DAT_005f9d4a
        ;   Label: LAB_005b327b
    POP EBX                             ; 005b3280
    RET                                 ; 005b3281
    MOV EAX,0x5f9d50                    ; 005b3282 | DAT_005f9d50
        ;   Label: LAB_005b3282
    POP EBX                             ; 005b3287
    RET                                 ; 005b3288
    MOV EAX,0x5f9d53                    ; 005b3289 | DAT_005f9d53
        ;   Label: LAB_005b3289
    POP EBX                             ; 005b328e
    RET                                 ; 005b328f
    MOV EAX,0x5f9d59                    ; 005b3290 | DAT_005f9d59
        ;   Label: LAB_005b3290
    POP EBX                             ; 005b3295
    RET                                 ; 005b3296
    MOV EAX,0x5f9d5c                    ; 005b3297 | DAT_005f9d5c
        ;   Label: LAB_005b3297
    POP EBX                             ; 005b329c
    RET                                 ; 005b329d
    MOV EAX,0x5f9d66                    ; 005b329e | = "ScrollLock"
        ;   Label: LAB_005b329e
    POP EBX                             ; 005b32a3
    RET                                 ; 005b32a4
    MOV EAX,0x5f9d71                    ; 005b32a5 | = "NumPad7"
        ;   Label: LAB_005b32a5
    POP EBX                             ; 005b32aa
    RET                                 ; 005b32ab
    MOV EAX,0x5f9d81                    ; 005b32ac | = "NumPad9"
        ;   Label: LAB_005b32ac
    POP EBX                             ; 005b32b1
    RET                                 ; 005b32b2
    MOV EAX,0x5f9d89                    ; 005b32b3 | = "NumPad-"
        ;   Label: LAB_005b32b3
    POP EBX                             ; 005b32b8
    RET                                 ; 005b32b9
    MOV EAX,0x5f9d91                    ; 005b32ba | = "NumPad4"
        ;   Label: LAB_005b32ba
    POP EBX                             ; 005b32bf
    RET                                 ; 005b32c0
    MOV EAX,0x5f9da1                    ; 005b32c1 | = "NumPad6"
        ;   Label: LAB_005b32c1
    POP EBX                             ; 005b32c6
    RET                                 ; 005b32c7
    MOV EAX,0x5f9da9                    ; 005b32c8 | = "NumPad+"
        ;   Label: LAB_005b32c8
    POP EBX                             ; 005b32cd
    RET                                 ; 005b32ce
    MOV EAX,0x5f9db9                    ; 005b32cf | = "NumPad2"
        ;   Label: LAB_005b32cf
    POP EBX                             ; 005b32d4
    RET                                 ; 005b32d5
    MOV EAX,0x5f9dc1                    ; 005b32d6 | = "NumPad3"
        ;   Label: LAB_005b32d6
    POP EBX                             ; 005b32db
    RET                                 ; 005b32dc
    MOV EAX,0x5f9dd1                    ; 005b32dd | = "NumPad."
        ;   Label: LAB_005b32dd
    POP EBX                             ; 005b32e2
    RET                                 ; 005b32e3
    MOV EAX,0x5f9dd9                    ; 005b32e4 | = "F11"
        ;   Label: LAB_005b32e4
    POP EBX                             ; 005b32e9
    RET                                 ; 005b32ea
    MOV EAX,0x5f9ddd                    ; 005b32eb | = "F12"
        ;   Label: LAB_005b32eb
    POP EBX                             ; 005b32f0
    RET                                 ; 005b32f1
    MOV EAX,0x5f9de1                    ; 005b32f2 | = "NumPadEnter"
        ;   Label: LAB_005b32f2
    POP EBX                             ; 005b32f7
    RET                                 ; 005b32f8
    MOV EAX,0x5f9ded                    ; 005b32f9 | = "RightCtrl"
        ;   Label: LAB_005b32f9
    POP EBX                             ; 005b32fe
    RET                                 ; 005b32ff
    MOV EAX,0x5f9df7                    ; 005b3300 | = "NumPad/"
        ;   Label: LAB_005b3300
    POP EBX                             ; 005b3305
    RET                                 ; 005b3306
    MOV EAX,0x5f9dff                    ; 005b3307 | = "RightAlt"
        ;   Label: LAB_005b3307
    POP EBX                             ; 005b330c
    RET                                 ; 005b330d
    MOV EAX,0x5f9e08                    ; 005b330e | = "NumLock"
        ;   Label: LAB_005b330e
    POP EBX                             ; 005b3313
    RET                                 ; 005b3314
    MOV EAX,0x5f9e10                    ; 005b3315 | DAT_005f9e10
        ;   Label: LAB_005b3315
    POP EBX                             ; 005b331a
    RET                                 ; 005b331b
    MOV EAX,0x5f9e18                    ; 005b331c | DAT_005f9e18
        ;   Label: LAB_005b331c
    POP EBX                             ; 005b3321
    RET                                 ; 005b3322
    MOV EAX,0x5f9e1d                    ; 005b3323 | DAT_005f9e1d
        ;   Label: LAB_005b3323
    POP EBX                             ; 005b3328
    RET                                 ; 005b3329
    MOV EAX,0x5f9e22                    ; 005b332a | = "Right"
        ;   Label: LAB_005b332a
    POP EBX                             ; 005b332f
    RET                                 ; 005b3330
    MOV EAX,0x5f9e28                    ; 005b3331 | DAT_005f9e28
        ;   Label: LAB_005b3331
    POP EBX                             ; 005b3336
    RET                                 ; 005b3337
    MOV EAX,0x5f9e2c                    ; 005b3338 | DAT_005f9e2c
        ;   Label: LAB_005b3338
    POP EBX                             ; 005b333d
    RET                                 ; 005b333e
    MOV EAX,0x5f9e36                    ; 005b333f | DAT_005f9e36
        ;   Label: LAB_005b333f
    POP EBX                             ; 005b3344
    RET                                 ; 005b3345
    MOV EAX,0x5f9e3a                    ; 005b3346 | DAT_005f9e3a
        ;   Label: LAB_005b3346
    POP EBX                             ; 005b334b
    RET                                 ; 005b334c
    MOV EAX,0x5f9e3e                    ; 005b334d | = "Left Mouse Button"
        ;   Label: LAB_005b334d
    POP EBX                             ; 005b3352
    RET                                 ; 005b3353
    MOV EAX,0x5f9e50                    ; 005b3354 | = "Right Mouse Button"
        ;   Label: LAB_005b3354
    POP EBX                             ; 005b3359
    RET                                 ; 005b335a
    JBE 0x005b324a                      ; 005b335b
        ;   XREF to: 005b324a (CONDITIONAL_JUMP)  ; LAB_005b324a
        ;   Label: LAB_005b335b
    CMP EBX,0x4d                        ; 005b3361
    JNC 0x005b3391                      ; 005b3364
        ;   XREF to: 005b3391 (CONDITIONAL_JUMP)  ; LAB_005b3391
    CMP EBX,0x40                        ; 005b3366
    JNC 0x005b34e2                      ; 005b3369
        ;   XREF to: 005b34e2 (CONDITIONAL_JUMP)  ; LAB_005b34e2
    CMP EBX,0x3a                        ; 005b336f
    JNC 0x005b354f                      ; 005b3372
        ;   XREF to: 005b354f (CONDITIONAL_JUMP)  ; LAB_005b354f
    CMP EBX,0x37                        ; 005b3378
    JNC 0x005b3580                      ; 005b337b
        ;   XREF to: 005b3580 (CONDITIONAL_JUMP)  ; LAB_005b3580
    CMP EBX,0x35                        ; 005b3381
    JBE 0x005b3251                      ; 005b3384
        ;   XREF to: 005b3251 (CONDITIONAL_JUMP)  ; LAB_005b3251
    MOV EAX,0x5f9d17                    ; 005b338a | = "RightShift"
    POP EBX                             ; 005b338f
    RET                                 ; 005b3390
    JBE 0x005b32c1                      ; 005b3391
        ;   XREF to: 005b32c1 (CONDITIONAL_JUMP)  ; LAB_005b32c1
        ;   Label: LAB_005b3391
    CMP EBX,0x145                       ; 005b3397
    JNC 0x005b33c1                      ; 005b339d
        ;   XREF to: 005b33c1 (CONDITIONAL_JUMP)  ; LAB_005b33c1
    CMP EBX,0x53                        ; 005b339f
    JNC 0x005b3469                      ; 005b33a2
        ;   XREF to: 005b3469 (CONDITIONAL_JUMP)  ; LAB_005b3469
    CMP EBX,0x50                        ; 005b33a8
    JNC 0x005b34cc                      ; 005b33ab
        ;   XREF to: 005b34cc (CONDITIONAL_JUMP)  ; LAB_005b34cc
    CMP EBX,0x4e                        ; 005b33b1
    JBE 0x005b32c8                      ; 005b33b4
        ;   XREF to: 005b32c8 (CONDITIONAL_JUMP)  ; LAB_005b32c8
    MOV EAX,0x5f9db1                    ; 005b33ba | = "NumPad1"
    POP EBX                             ; 005b33bf
    RET                                 ; 005b33c0
    JBE 0x005b330e                      ; 005b33c1
        ;   XREF to: 005b330e (CONDITIONAL_JUMP)  ; LAB_005b330e
        ;   Label: LAB_005b33c1
    CMP EBX,0x14f                       ; 005b33c7
    JNC 0x005b33ec                      ; 005b33cd
        ;   XREF to: 005b33ec (CONDITIONAL_JUMP)  ; LAB_005b33ec
    CMP EBX,0x149                       ; 005b33cf
    JNC 0x005b3442                      ; 005b33d5
        ;   XREF to: 005b3442 (CONDITIONAL_JUMP)  ; LAB_005b3442
    CMP EBX,0x147                       ; 005b33d7
    JC 0x005b3427                       ; 005b33dd
        ;   XREF to: 005b3427 (CONDITIONAL_JUMP)  ; LAB_005b3427
    JBE 0x005b3315                      ; 005b33df
        ;   XREF to: 005b3315 (CONDITIONAL_JUMP)  ; LAB_005b3315
    MOV EAX,0x5f9e15                    ; 005b33e5 | DAT_005f9e15
    POP EBX                             ; 005b33ea
    RET                                 ; 005b33eb
    JBE 0x005b3331                      ; 005b33ec
        ;   XREF to: 005b3331 (CONDITIONAL_JUMP)  ; LAB_005b3331
        ;   Label: LAB_005b33ec
    CMP EBX,0x152                       ; 005b33f2
    JNC 0x005b340d                      ; 005b33f8
        ;   XREF to: 005b340d (CONDITIONAL_JUMP)  ; LAB_005b340d
    CMP EBX,0x150                       ; 005b33fa
    JBE 0x005b3338                      ; 005b3400
        ;   XREF to: 005b3338 (CONDITIONAL_JUMP)  ; LAB_005b3338
    MOV EAX,0x5f9e31                    ; 005b3406 | DAT_005f9e31
    POP EBX                             ; 005b340b
    RET                                 ; 005b340c
    JBE 0x005b333f                      ; 005b340d
        ;   XREF to: 005b333f (CONDITIONAL_JUMP)  ; LAB_005b333f
        ;   Label: LAB_005b340d
    CMP EBX,0x200                       ; 005b3413
    JNC 0x005b342e                      ; 005b3419
        ;   XREF to: 005b342e (CONDITIONAL_JUMP)  ; LAB_005b342e
    CMP EBX,0x153                       ; 005b341b
    JZ 0x005b3346                       ; 005b3421
        ;   XREF to: 005b3346 (CONDITIONAL_JUMP)  ; LAB_005b3346
    MOV EAX,0x5f9e63                    ; 005b3427 | = "(invalid key)"
        ;   Label: LAB_005b3427
    POP EBX                             ; 005b342c
    RET                                 ; 005b342d
    JBE 0x005b334d                      ; 005b342e
        ;   XREF to: 005b334d (CONDITIONAL_JUMP)  ; LAB_005b334d
        ;   Label: LAB_005b342e
    CMP EBX,0x201                       ; 005b3434
    JZ 0x005b3354                       ; 005b343a
        ;   XREF to: 005b3354 (CONDITIONAL_JUMP)  ; LAB_005b3354
    JMP 0x005b3427                      ; 005b3440
        ;   XREF to: 005b3427 (UNCONDITIONAL_JUMP)  ; LAB_005b3427
    JBE 0x005b331c                      ; 005b3442
        ;   XREF to: 005b331c (CONDITIONAL_JUMP)  ; LAB_005b331c
        ;   Label: LAB_005b3442
    CMP EBX,0x14b                       ; 005b3448
    JC 0x005b3427                       ; 005b344e
        ;   XREF to: 005b3427 (CONDITIONAL_JUMP)  ; LAB_005b3427
    JBE 0x005b3323                      ; 005b3450
        ;   XREF to: 005b3323 (CONDITIONAL_JUMP)  ; LAB_005b3323
    CMP EBX,0x14d                       ; 005b3456
    JZ 0x005b332a                       ; 005b345c
        ;   XREF to: 005b332a (CONDITIONAL_JUMP)  ; LAB_005b332a
    MOV EAX,0x5f9e63                    ; 005b3462 | = "(invalid key)"
    POP EBX                             ; 005b3467
    RET                                 ; 005b3468
    JBE 0x005b32dd                      ; 005b3469
        ;   XREF to: 005b32dd (CONDITIONAL_JUMP)  ; LAB_005b32dd
        ;   Label: LAB_005b3469
    CMP EBX,0x11c                       ; 005b346f
    JNC 0x005b3492                      ; 005b3475
        ;   XREF to: 005b3492 (CONDITIONAL_JUMP)  ; LAB_005b3492
    CMP EBX,0x57                        ; 005b3477
    JC 0x005b3427                       ; 005b347a
        ;   XREF to: 005b3427 (CONDITIONAL_JUMP)  ; LAB_005b3427
    JBE 0x005b32e4                      ; 005b347c
        ;   XREF to: 005b32e4 (CONDITIONAL_JUMP)  ; LAB_005b32e4
    CMP EBX,0x58                        ; 005b3482
    JZ 0x005b32eb                       ; 005b3485
        ;   XREF to: 005b32eb (CONDITIONAL_JUMP)  ; LAB_005b32eb
    MOV EAX,0x5f9e63                    ; 005b348b | = "(invalid key)"
    POP EBX                             ; 005b3490
    RET                                 ; 005b3491
    JBE 0x005b32f2                      ; 005b3492
        ;   XREF to: 005b32f2 (CONDITIONAL_JUMP)  ; LAB_005b32f2
        ;   Label: LAB_005b3492
    CMP EBX,0x135                       ; 005b3498
    JNC 0x005b34b3                      ; 005b349e
        ;   XREF to: 005b34b3 (CONDITIONAL_JUMP)  ; LAB_005b34b3
    CMP EBX,0x11d                       ; 005b34a0
    JZ 0x005b32f9                       ; 005b34a6
        ;   XREF to: 005b32f9 (CONDITIONAL_JUMP)  ; LAB_005b32f9
    MOV EAX,0x5f9e63                    ; 005b34ac | = "(invalid key)"
    POP EBX                             ; 005b34b1
    RET                                 ; 005b34b2
    JBE 0x005b3300                      ; 005b34b3
        ;   XREF to: 005b3300 (CONDITIONAL_JUMP)  ; LAB_005b3300
        ;   Label: LAB_005b34b3
    CMP EBX,0x138                       ; 005b34b9
    JZ 0x005b3307                       ; 005b34bf
        ;   XREF to: 005b3307 (CONDITIONAL_JUMP)  ; LAB_005b3307
    MOV EAX,0x5f9e63                    ; 005b34c5 | = "(invalid key)"
    POP EBX                             ; 005b34ca
    RET                                 ; 005b34cb
    JBE 0x005b32cf                      ; 005b34cc
        ;   XREF to: 005b32cf (CONDITIONAL_JUMP)  ; LAB_005b32cf
        ;   Label: LAB_005b34cc
    CMP EBX,0x51                        ; 005b34d2
    JBE 0x005b32d6                      ; 005b34d5
        ;   XREF to: 005b32d6 (CONDITIONAL_JUMP)  ; LAB_005b32d6
    MOV EAX,0x5f9dc9                    ; 005b34db | = "NumPad0"
    POP EBX                             ; 005b34e0
    RET                                 ; 005b34e1
    JBE 0x005b3282                      ; 005b34e2
        ;   XREF to: 005b3282 (CONDITIONAL_JUMP)  ; LAB_005b3282
        ;   Label: LAB_005b34e2
    CMP EBX,0x46                        ; 005b34e8
    JNC 0x005b3502                      ; 005b34eb
        ;   XREF to: 005b3502 (CONDITIONAL_JUMP)  ; LAB_005b3502
    CMP EBX,0x43                        ; 005b34ed
    JNC 0x005b3539                      ; 005b34f0
        ;   XREF to: 005b3539 (CONDITIONAL_JUMP)  ; LAB_005b3539
    CMP EBX,0x41                        ; 005b34f2
    JBE 0x005b3289                      ; 005b34f5
        ;   XREF to: 005b3289 (CONDITIONAL_JUMP)  ; LAB_005b3289
    MOV EAX,0x5f9d56                    ; 005b34fb | DAT_005f9d56
    POP EBX                             ; 005b3500
    RET                                 ; 005b3501
    JBE 0x005b329e                      ; 005b3502
        ;   XREF to: 005b329e (CONDITIONAL_JUMP)  ; LAB_005b329e
        ;   Label: LAB_005b3502
    CMP EBX,0x49                        ; 005b3508
    JNC 0x005b351d                      ; 005b350b
        ;   XREF to: 005b351d (CONDITIONAL_JUMP)  ; LAB_005b351d
    CMP EBX,0x47                        ; 005b350d
    JBE 0x005b32a5                      ; 005b3510
        ;   XREF to: 005b32a5 (CONDITIONAL_JUMP)  ; LAB_005b32a5
    MOV EAX,0x5f9d79                    ; 005b3516 | = "NumPad8"
    POP EBX                             ; 005b351b
    RET                                 ; 005b351c
    JBE 0x005b32ac                      ; 005b351d
        ;   XREF to: 005b32ac (CONDITIONAL_JUMP)  ; LAB_005b32ac
        ;   Label: LAB_005b351d
    CMP EBX,0x4b                        ; 005b3523
    JC 0x005b32b3                       ; 005b3526
        ;   XREF to: 005b32b3 (CONDITIONAL_JUMP)  ; LAB_005b32b3
    JBE 0x005b32ba                      ; 005b352c
        ;   XREF to: 005b32ba (CONDITIONAL_JUMP)  ; LAB_005b32ba
    MOV EAX,0x5f9d99                    ; 005b3532 | = "NumPad5"
    POP EBX                             ; 005b3537
    RET                                 ; 005b3538
    JBE 0x005b3290                      ; 005b3539
        ;   XREF to: 005b3290 (CONDITIONAL_JUMP)  ; LAB_005b3290
        ;   Label: LAB_005b3539
    CMP EBX,0x44                        ; 005b353f
    JBE 0x005b3297                      ; 005b3542
        ;   XREF to: 005b3297 (CONDITIONAL_JUMP)  ; LAB_005b3297
    MOV EAX,0x5f9d60                    ; 005b3548 | = "Pause"
    POP EBX                             ; 005b354d
    RET                                 ; 005b354e
    JBE 0x005b3266                      ; 005b354f
        ;   XREF to: 005b3266 (CONDITIONAL_JUMP)  ; LAB_005b3266
        ;   Label: LAB_005b354f
    CMP EBX,0x3d                        ; 005b3555
    JNC 0x005b356a                      ; 005b3558
        ;   XREF to: 005b356a (CONDITIONAL_JUMP)  ; LAB_005b356a
    CMP EBX,0x3b                        ; 005b355a
    JBE 0x005b326d                      ; 005b355d
        ;   XREF to: 005b326d (CONDITIONAL_JUMP)  ; LAB_005b326d
    MOV EAX,0x5f9d44                    ; 005b3563 | DAT_005f9d44
    POP EBX                             ; 005b3568
    RET                                 ; 005b3569
    JBE 0x005b3274                      ; 005b356a
        ;   XREF to: 005b3274 (CONDITIONAL_JUMP)  ; LAB_005b3274
        ;   Label: LAB_005b356a
    CMP EBX,0x3e                        ; 005b3570
    JBE 0x005b327b                      ; 005b3573
        ;   XREF to: 005b327b (CONDITIONAL_JUMP)  ; LAB_005b327b
    MOV EAX,0x5f9d4d                    ; 005b3579 | DAT_005f9d4d
    POP EBX                             ; 005b357e
    RET                                 ; 005b357f
    JBE 0x005b3258                      ; 005b3580
        ;   XREF to: 005b3258 (CONDITIONAL_JUMP)  ; LAB_005b3258
        ;   Label: LAB_005b3580
    CMP EBX,0x38                        ; 005b3586
    JBE 0x005b325f                      ; 005b3589
        ;   XREF to: 005b325f (CONDITIONAL_JUMP)  ; LAB_005b325f
    MOV EAX,0x5f9d32                    ; 005b358f | = "Space"
    POP EBX                             ; 005b3594
    RET                                 ; 005b3595
    JBE 0x005b31c5                      ; 005b3596
        ;   XREF to: 005b31c5 (CONDITIONAL_JUMP)  ; LAB_005b31c5
        ;   Label: LAB_005b3596
    CMP EBX,0x26                        ; 005b359c
    JNC 0x005b35c3                      ; 005b359f
        ;   XREF to: 005b35c3 (CONDITIONAL_JUMP)  ; LAB_005b35c3
    CMP EBX,0x1f                        ; 005b35a1
    JNC 0x005b3639                      ; 005b35a4
        ;   XREF to: 005b3639 (CONDITIONAL_JUMP)  ; LAB_005b3639
    CMP EBX,0x1c                        ; 005b35aa
    JNC 0x005b3670                      ; 005b35ad
        ;   XREF to: 005b3670 (CONDITIONAL_JUMP)  ; LAB_005b3670
    CMP EBX,0x1a                        ; 005b35b3
    JBE 0x005b31cc                      ; 005b35b6
        ;   XREF to: 005b31cc (CONDITIONAL_JUMP)  ; LAB_005b31cc
    MOV EAX,0x5f9cd0                    ; 005b35bc | DAT_005f9cd0
    POP EBX                             ; 005b35c1
    RET                                 ; 005b35c2
    JBE 0x005b3204                      ; 005b35c3
        ;   XREF to: 005b3204 (CONDITIONAL_JUMP)  ; LAB_005b3204
        ;   Label: LAB_005b35c3
    CMP EBX,0x2d                        ; 005b35c9
    JNC 0x005b35e3                      ; 005b35cc
        ;   XREF to: 005b35e3 (CONDITIONAL_JUMP)  ; LAB_005b35e3
    CMP EBX,0x29                        ; 005b35ce
    JNC 0x005b361a                      ; 005b35d1
        ;   XREF to: 005b361a (CONDITIONAL_JUMP)  ; LAB_005b361a
    CMP EBX,0x27                        ; 005b35d3
    JBE 0x005b320b                      ; 005b35d6
        ;   XREF to: 005b320b (CONDITIONAL_JUMP)  ; LAB_005b320b
    MOV EAX,0x5f9cf5                    ; 005b35dc | DAT_005f9cf5
    POP EBX                             ; 005b35e1
    RET                                 ; 005b35e2
    JBE 0x005b3227                      ; 005b35e3
        ;   XREF to: 005b3227 (CONDITIONAL_JUMP)  ; LAB_005b3227
        ;   Label: LAB_005b35e3
    CMP EBX,0x30                        ; 005b35e9
    JNC 0x005b35fe                      ; 005b35ec
        ;   XREF to: 005b35fe (CONDITIONAL_JUMP)  ; LAB_005b35fe
    CMP EBX,0x2e                        ; 005b35ee
    JBE 0x005b322e                      ; 005b35f1
        ;   XREF to: 005b322e (CONDITIONAL_JUMP)  ; LAB_005b322e
    MOV EAX,0x5f9d09                    ; 005b35f7 | DAT_005f9d09
    POP EBX                             ; 005b35fc
    RET                                 ; 005b35fd
    JBE 0x005b3235                      ; 005b35fe
        ;   XREF to: 005b3235 (CONDITIONAL_JUMP)  ; LAB_005b3235
        ;   Label: LAB_005b35fe
    CMP EBX,0x32                        ; 005b3604
    JC 0x005b323c                       ; 005b3607
        ;   XREF to: 005b323c (CONDITIONAL_JUMP)  ; LAB_005b323c
    JBE 0x005b3243                      ; 005b360d
        ;   XREF to: 005b3243 (CONDITIONAL_JUMP)  ; LAB_005b3243
    MOV EAX,0x5f9d11                    ; 005b3613 | DAT_005f9d11
    POP EBX                             ; 005b3618
    RET                                 ; 005b3619
    JBE 0x005b3212                      ; 005b361a
        ;   XREF to: 005b3212 (CONDITIONAL_JUMP)  ; LAB_005b3212
        ;   Label: LAB_005b361a
    CMP EBX,0x2a                        ; 005b3620
    JBE 0x005b3219                      ; 005b3623
        ;   XREF to: 005b3219 (CONDITIONAL_JUMP)  ; LAB_005b3219
    CMP EBX,0x2c                        ; 005b3629
    JZ 0x005b3220                       ; 005b362c
        ;   XREF to: 005b3220 (CONDITIONAL_JUMP)  ; LAB_005b3220
    MOV EAX,0x5f9e63                    ; 005b3632 | = "(invalid key)"
    POP EBX                             ; 005b3637
    RET                                 ; 005b3638
    JBE 0x005b31e1                      ; 005b3639
        ;   XREF to: 005b31e1 (CONDITIONAL_JUMP)  ; LAB_005b31e1
        ;   Label: LAB_005b3639
    CMP EBX,0x22                        ; 005b363f
    JNC 0x005b3654                      ; 005b3642
        ;   XREF to: 005b3654 (CONDITIONAL_JUMP)  ; LAB_005b3654
    CMP EBX,0x20                        ; 005b3644
    JBE 0x005b31e8                      ; 005b3647
        ;   XREF to: 005b31e8 (CONDITIONAL_JUMP)  ; LAB_005b31e8
    MOV EAX,0x5f9ce7                    ; 005b364d | DAT_005f9ce7
    POP EBX                             ; 005b3652
    RET                                 ; 005b3653
    JBE 0x005b31ef                      ; 005b3654
        ;   XREF to: 005b31ef (CONDITIONAL_JUMP)  ; LAB_005b31ef
        ;   Label: LAB_005b3654
    CMP EBX,0x24                        ; 005b365a
    JC 0x005b31f6                       ; 005b365d
        ;   XREF to: 005b31f6 (CONDITIONAL_JUMP)  ; LAB_005b31f6
    JBE 0x005b31fd                      ; 005b3663
        ;   XREF to: 005b31fd (CONDITIONAL_JUMP)  ; LAB_005b31fd
    MOV EAX,0x5f9cef                    ; 005b3669 | DAT_005f9cef
    POP EBX                             ; 005b366e
    RET                                 ; 005b366f
    JBE 0x005b31d3                      ; 005b3670
        ;   XREF to: 005b31d3 (CONDITIONAL_JUMP)  ; LAB_005b31d3
        ;   Label: LAB_005b3670
    CMP EBX,0x1d                        ; 005b3676
    JBE 0x005b31da                      ; 005b3679
        ;   XREF to: 005b31da (CONDITIONAL_JUMP)  ; LAB_005b31da
    MOV EAX,0x5f9ce1                    ; 005b367f | DAT_005f9ce1
    POP EBX                             ; 005b3684
    RET                                 ; 005b3685
    JBE 0x005b3186                      ; 005b3686
        ;   XREF to: 005b3186 (CONDITIONAL_JUMP)  ; LAB_005b3186
        ;   Label: LAB_005b3686
    CMP EBX,0x12                        ; 005b368c
    JNC 0x005b36a6                      ; 005b368f
        ;   XREF to: 005b36a6 (CONDITIONAL_JUMP)  ; LAB_005b36a6
    CMP EBX,0xf                         ; 005b3691
    JNC 0x005b36dd                      ; 005b3694
        ;   XREF to: 005b36dd (CONDITIONAL_JUMP)  ; LAB_005b36dd
    CMP EBX,0xd                         ; 005b3696
    JBE 0x005b318d                      ; 005b3699
        ;   XREF to: 005b318d (CONDITIONAL_JUMP)  ; LAB_005b318d
    MOV EAX,0x5f9cac                    ; 005b369f | = "BackSpace"
    POP EBX                             ; 005b36a4
    RET                                 ; 005b36a5
    JBE 0x005b31a2                      ; 005b36a6
        ;   XREF to: 005b31a2 (CONDITIONAL_JUMP)  ; LAB_005b31a2
        ;   Label: LAB_005b36a6
    CMP EBX,0x15                        ; 005b36ac
    JNC 0x005b36c1                      ; 005b36af
        ;   XREF to: 005b36c1 (CONDITIONAL_JUMP)  ; LAB_005b36c1
    CMP EBX,0x13                        ; 005b36b1
    JBE 0x005b31a9                      ; 005b36b4
        ;   XREF to: 005b31a9 (CONDITIONAL_JUMP)  ; LAB_005b31a9
    MOV EAX,0x5f9cc2                    ; 005b36ba | DAT_005f9cc2
    POP EBX                             ; 005b36bf
    RET                                 ; 005b36c0
    JBE 0x005b31b0                      ; 005b36c1
        ;   XREF to: 005b31b0 (CONDITIONAL_JUMP)  ; LAB_005b31b0
        ;   Label: LAB_005b36c1
    CMP EBX,0x17                        ; 005b36c7
    JC 0x005b31b7                       ; 005b36ca
        ;   XREF to: 005b31b7 (CONDITIONAL_JUMP)  ; LAB_005b31b7
    JBE 0x005b31be                      ; 005b36d0
        ;   XREF to: 005b31be (CONDITIONAL_JUMP)  ; LAB_005b31be
    MOV EAX,0x5f9cca                    ; 005b36d6 | DAT_005f9cca
    POP EBX                             ; 005b36db
    RET                                 ; 005b36dc
    JBE 0x005b3194                      ; 005b36dd
        ;   XREF to: 005b3194 (CONDITIONAL_JUMP)  ; LAB_005b3194
        ;   Label: LAB_005b36dd
    CMP EBX,0x10                        ; 005b36e3
    JBE 0x005b319b                      ; 005b36e6
        ;   XREF to: 005b319b (CONDITIONAL_JUMP)  ; LAB_005b319b
    MOV EAX,0x5f9cbc                    ; 005b36ec | DAT_005f9cbc
    POP EBX                             ; 005b36f1
    RET                                 ; 005b36f2
    JBE 0x005b316a                      ; 005b36f3
        ;   XREF to: 005b316a (CONDITIONAL_JUMP)  ; LAB_005b316a
        ;   Label: LAB_005b36f3
    CMP EBX,0x9                         ; 005b36f9
    JNC 0x005b370e                      ; 005b36fc
        ;   XREF to: 005b370e (CONDITIONAL_JUMP)  ; LAB_005b370e
    CMP EBX,0x7                         ; 005b36fe
    JBE 0x005b3171                      ; 005b3701
        ;   XREF to: 005b3171 (CONDITIONAL_JUMP)  ; LAB_005b3171
    MOV EAX,0x5f9ca0                    ; 005b3707 | DAT_005f9ca0
    POP EBX                             ; 005b370c
    RET                                 ; 005b370d
    JBE 0x005b3178                      ; 005b370e
        ;   XREF to: 005b3178 (CONDITIONAL_JUMP)  ; LAB_005b3178
        ;   Label: LAB_005b370e
    CMP EBX,0xa                         ; 005b3714
    JBE 0x005b317f                      ; 005b3717
        ;   XREF to: 005b317f (CONDITIONAL_JUMP)  ; LAB_005b317f
    MOV EAX,0x5f9ca6                    ; 005b371d | DAT_005f9ca6
    POP EBX                             ; 005b3722
    RET                                 ; 005b3723
    JBE 0x005b315c                      ; 005b3724
        ;   XREF to: 005b315c (CONDITIONAL_JUMP)  ; LAB_005b315c
        ;   Label: LAB_005b3724
    CMP EBX,0x4                         ; 005b372a
    JBE 0x005b3163                      ; 005b372d
        ;   XREF to: 005b3163 (CONDITIONAL_JUMP)  ; LAB_005b3163
    MOV EAX,0x5f9c9a                    ; 005b3733 | DAT_005f9c9a
    POP EBX                             ; 005b3738
    RET                                 ; 005b3739

