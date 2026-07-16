; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_FUN_10003100(void)
;
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 10002a99
;
; Referenced Globals:
;   undefined4 DAT_10012178
;   undefined4 DAT_100122a8
;   undefined4 DAT_100122b0
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_10014180
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   undefined4 DAT_100141b8
;   undefined4 DAT_100141dc
;   IDirect3DDevice3* g_Device = 00000000
;   undefined4 DAT_100141e4
;   TerminatedCString s_Can_t_create_hold_surfac_10016a9c
;   undefined4 DAT_101398c8
;   undefined4 DAT_10226a58
;   undefined4 DAT_10226a5c
;
; Called Functions:
;   dll_dx7.cpp_FUN_10002340
;   dll_dx7.cpp_FUN_10003400
;   dll_dx7.cpp_FUN_100035b0
;
; *****************************************************************************

section .text

    SUB ESP,0x110                       ; 10003100
        ;   Label: dll_dx7.cpp_FUN_10003100
    MOV EAX,[0x10014180]                ; 10003106 | DAT_10014180
    MOV ECX,dword ptr [0x100141dc]      ; 1000310b | DAT_100141dc
    PUSH ESI                            ; 10003111
    PUSH EDI                            ; 10003112
    PUSH 0x0                            ; 10003113
    PUSH 0x100141e0                     ; 10003115 | g_Device
    PUSH EAX                            ; 1000311a
    PUSH 0x10012178                     ; 1000311b | DAT_10012178
    MOV EAX,dword ptr [ECX]             ; 10003120
    PUSH ECX                            ; 10003122
    CALL dword ptr [EAX + 0x20]         ; 10003123
    TEST EAX,EAX                        ; 10003126
    JZ 0x10003135                       ; 10003128
        ;   XREF to: 10003135 (CONDITIONAL_JUMP)  ; LAB_10003135
    XOR EAX,EAX                         ; 1000312a
    POP EDI                             ; 1000312c
    POP ESI                             ; 1000312d
    ADD ESP,0x110                       ; 1000312e
    RET                                 ; 10003134
    LEA EAX,[ESP + 0x8]                 ; 10003135
        ;   Label: LAB_10003135
    MOV ECX,dword ptr [0x100141e0]      ; 10003139 | g_Device
    MOV dword ptr [ESP + 0x8],0x0       ; 1000313f
    PUSH EAX                            ; 10003147
    PUSH 0x10003340                     ; 10003148 | LAB_10003340
    PUSH ECX                            ; 1000314d
    MOV EAX,dword ptr [ECX]             ; 1000314e
    CALL dword ptr [EAX + 0x20]         ; 10003150
    TEST EAX,EAX                        ; 10003153
    JZ 0x10003162                       ; 10003155
        ;   XREF to: 10003162 (CONDITIONAL_JUMP)  ; LAB_10003162
    XOR EAX,EAX                         ; 10003157
    POP EDI                             ; 10003159
    POP ESI                             ; 1000315a
    ADD ESP,0x110                       ; 1000315b
    RET                                 ; 10003161
    CMP dword ptr [ESP + 0x8],0x0       ; 10003162
        ;   Label: LAB_10003162
    JNZ 0x10003174                      ; 10003167
        ;   XREF to: 10003174 (CONDITIONAL_JUMP)  ; LAB_10003174
    XOR EAX,EAX                         ; 10003169
    POP EDI                             ; 1000316b
    POP ESI                             ; 1000316c
    ADD ESP,0x110                       ; 1000316d
    RET                                 ; 10003173
    PUSH 0x0                            ; 10003174
        ;   Label: LAB_10003174
    MOV EAX,[0x100141dc]                ; 10003176 | DAT_100141dc
    PUSH 0x100141e4                     ; 1000317b | DAT_100141e4
    PUSH EAX                            ; 10003180
    MOV EAX,dword ptr [EAX]             ; 10003181
    CALL dword ptr [EAX + 0x18]         ; 10003183
    TEST EAX,EAX                        ; 10003186
    JZ 0x10003195                       ; 10003188
        ;   XREF to: 10003195 (CONDITIONAL_JUMP)  ; LAB_10003195
    XOR EAX,EAX                         ; 1000318a
    POP EDI                             ; 1000318c
    POP ESI                             ; 1000318d
    ADD ESP,0x110                       ; 1000318e
    RET                                 ; 10003194
    MOV EAX,[0x100141e4]                ; 10003195 | DAT_100141e4
        ;   Label: LAB_10003195
    MOV ECX,dword ptr [0x100141e0]      ; 1000319a | g_Device
    PUSH EAX                            ; 100031a0
    PUSH ECX                            ; 100031a1
    MOV EAX,dword ptr [ECX]             ; 100031a2
    CALL dword ptr [EAX + 0x14]         ; 100031a4
    TEST EAX,EAX                        ; 100031a7
    JZ 0x100031b6                       ; 100031a9
        ;   XREF to: 100031b6 (CONDITIONAL_JUMP)  ; LAB_100031b6
    XOR EAX,EAX                         ; 100031ab
    POP EDI                             ; 100031ad
    POP ESI                             ; 100031ae
    ADD ESP,0x110                       ; 100031af
    RET                                 ; 100031b5
    LEA EDI,[ESP + 0xc]                 ; 100031b6
        ;   Label: LAB_100031b6
    XOR EAX,EAX                         ; 100031ba
    MOV ECX,0xb                         ; 100031bc
    XOR EDX,EDX                         ; 100031c1
    STOSD.REP ES:EDI                    ; 100031c3
    MOV EAX,[0x10014174]                ; 100031c5 | DAT_10014174
    MOV ECX,dword ptr [0x10014178]      ; 100031ca | DAT_10014178
    MOV dword ptr [ESP + 0x10],EDX      ; 100031d0
    MOV dword ptr [ESP + 0x14],EDX      ; 100031d4
    MOV dword ptr [ESP + 0x18],EAX      ; 100031d8
    MOV dword ptr [ESP + 0x1c],ECX      ; 100031dc
    FILD dword ptr [ESP + 0x1c]         ; 100031e0
    MOV dword ptr [ESP + 0xc],0x2c      ; 100031e4
    MOV dword ptr [ESP + 0x20],0xbf800000 ; 100031ec
    FIDIV dword ptr [ESP + 0x18]        ; 100031f4
    MOV dword ptr [ESP + 0x28],0x40000000 ; 100031f8
    MOV dword ptr [ESP + 0x34],0x3f800000 ; 10003200
    FMUL double ptr [0x100122a8]        ; 10003208 | DAT_100122a8
    MOV EAX,[0x100141e4]                ; 1000320e | DAT_100141e4
    MOV dword ptr [ESP + 0x30],EDX      ; 10003213
    LEA EDX,[ESP + 0xc]                 ; 10003217
    PUSH EDX                            ; 1000321b
    PUSH EAX                            ; 1000321c
    FST float ptr [ESP + 0x34]          ; 1000321d
    FMUL float ptr [0x100122b0]         ; 10003221 | DAT_100122b0
    FSTP float ptr [ESP + 0x2c]         ; 10003227
    MOV EAX,dword ptr [EAX]             ; 1000322b
    CALL dword ptr [EAX + 0x44]         ; 1000322d
    TEST EAX,EAX                        ; 10003230
    JZ 0x1000323f                       ; 10003232
        ;   XREF to: 1000323f (CONDITIONAL_JUMP)  ; LAB_1000323f
    XOR EAX,EAX                         ; 10003234
    POP EDI                             ; 10003236
    POP ESI                             ; 10003237
    ADD ESP,0x110                       ; 10003238
    RET                                 ; 1000323e
    MOV EAX,[0x100141e4]                ; 1000323f | DAT_100141e4
        ;   Label: LAB_1000323f
    MOV ECX,dword ptr [0x100141e0]      ; 10003244 | g_Device
    PUSH EAX                            ; 1000324a
    PUSH ECX                            ; 1000324b
    MOV EAX,dword ptr [ECX]             ; 1000324c
    CALL dword ptr [EAX + 0x30]         ; 1000324e
    CMP dword ptr [0x101398c8],0x0      ; 10003251 | DAT_101398c8
    JZ 0x1000330b                       ; 10003258
        ;   XREF to: 1000330b (CONDITIONAL_JUMP)  ; LAB_1000330b
    LEA EDI,[ESP + 0x38]                ; 1000325e
    XOR EAX,EAX                         ; 10003262
    MOV ECX,0x1f                        ; 10003264
    STOSD.REP ES:EDI                    ; 10003269
    MOV ESI,0x10226a58                  ; 1000326b | DAT_10226a58
    LEA EDI,[ESP + 0x80]                ; 10003270
    MOV ECX,0x8                         ; 10003277
    MOVSD.REP ES:EDI,ESI                ; 1000327c | DAT_10226a58 | DAT_10226a5c
    MOV dword ptr [ESP + 0x38],0x7c     ; 1000327e
    MOV dword ptr [ESP + 0x3c],0x1007   ; 10003286
    MOV dword ptr [ESP + 0x44],0x280    ; 1000328e
    PUSH EAX                            ; 10003296
    MOV ECX,dword ptr [0x10014188]      ; 10003297 | g_DirectDraw4
    LEA EAX,[ESP + 0x3c]                ; 1000329d
    PUSH 0x100141b8                     ; 100032a1 | DAT_100141b8
    MOV dword ptr [ESP + 0x48],0x1e0    ; 100032a6
    MOV dword ptr [ESP + 0xa8],0x40     ; 100032ae
    PUSH EAX                            ; 100032b9
    PUSH ECX                            ; 100032ba
    MOV EAX,dword ptr [ECX]             ; 100032bb
    CALL dword ptr [EAX + 0x18]         ; 100032bd
    TEST EAX,EAX                        ; 100032c0
    JZ 0x100032d1                       ; 100032c2
        ;   XREF to: 100032d1 (CONDITIONAL_JUMP)  ; LAB_100032d1
    PUSH 0x10016a9c                     ; 100032c4 | = "Can't create hold surface"
    CALL dll_dx7.cpp_FUN_10002340       ; 100032c9
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002340()
    ADD ESP,0x4                         ; 100032ce
    LEA EDI,[ESP + 0xb4]                ; 100032d1
        ;   Label: LAB_100032d1
    XOR EAX,EAX                         ; 100032d8
    MOV ECX,0x19                        ; 100032da
    STOSD.REP ES:EDI                    ; 100032df
    MOV dword ptr [ESP + 0xb4],0x64     ; 100032e1
    LEA EAX,[ESP + 0xb4]                ; 100032ec
    MOV ECX,dword ptr [0x100141b8]      ; 100032f3 | DAT_100141b8
    PUSH EAX                            ; 100032f9
    PUSH 0x1000400                      ; 100032fa
    PUSH 0x0                            ; 100032ff
    MOV EAX,dword ptr [ECX]             ; 10003301
    PUSH 0x0                            ; 10003303
    PUSH 0x0                            ; 10003305
    PUSH ECX                            ; 10003307
    CALL dword ptr [EAX + 0x14]         ; 10003308
    CALL dll_dx7.cpp_FUN_10003400       ; 1000330b
        ;   XREF to: 10003400 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10003400()
        ;   Label: LAB_1000330b
    TEST EAX,EAX                        ; 10003310
    JNZ 0x1000331f                      ; 10003312
        ;   XREF to: 1000331f (CONDITIONAL_JUMP)  ; LAB_1000331f
    XOR EAX,EAX                         ; 10003314
    POP EDI                             ; 10003316
    POP ESI                             ; 10003317
    ADD ESP,0x110                       ; 10003318
    RET                                 ; 1000331e
    CALL dll_dx7.cpp_FUN_100035b0       ; 1000331f
        ;   XREF to: 100035b0 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_FUN_100035b0()
        ;   Label: LAB_1000331f
    POP EDI                             ; 10003324
    CMP EAX,0x1                         ; 10003325
    SBB EAX,EAX                         ; 10003328
    POP ESI                             ; 1000332a
    INC EAX                             ; 1000332b
    ADD ESP,0x110                       ; 1000332c
    RET                                 ; 10003332

