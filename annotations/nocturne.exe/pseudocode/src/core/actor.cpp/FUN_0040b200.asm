; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_FUN_0040b200(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
;
; XREF[1]:
;   core_bodypart.cpp_FUN_00417ef0 at 00417f01
;
; Referenced Globals:
;   double DOUBLE_005777a9 = 2
;   double DOUBLE_005777b1 = 6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b200
        ;   Label: core_actor.cpp_FUN_0040b200
    PUSH EBP                            ; 0040b201
    MOV EBP,ESP                         ; 0040b202
    SUB ESP,0x34                        ; 0040b204
    AND ESP,0xfffffff8                  ; 0040b207
    MOV ECX,dword ptr [EBP + 0xc]       ; 0040b20a
    LEA EDX,[ESP + 0x10]                ; 0040b20d
    PUSH EDX                            ; 0040b211
    MOV EAX,dword ptr [ECX + 0x14c]     ; 0040b212
    PUSH ECX                            ; 0040b218
    CALL dword ptr [EAX + 0x14]         ; 0040b219
    LEA EDX,[EAX + 0xc]                 ; 0040b21c
    ADD ESP,0x8                         ; 0040b21f
    FLD float ptr [EDX]                 ; 0040b222
    FSUB float ptr [EAX]                ; 0040b224
    XOR EBX,EBX                         ; 0040b226
    FSTP float ptr [ESP + 0x28]         ; 0040b228
    FLD float ptr [EDX + 0x4]           ; 0040b22c
    FSUB float ptr [EAX + 0x4]          ; 0040b22f
    FLD float ptr [ESP + 0x28]          ; 0040b232
    FXCH                                ; 0040b236
    FSTP float ptr [ESP + 0x2c]         ; 0040b238
    FLD float ptr [EDX + 0x8]           ; 0040b23c
    FSUB float ptr [EAX + 0x8]          ; 0040b23f
    FLD1                                ; 0040b242
    FXCH                                ; 0040b244
    FSTP float ptr [ESP + 0x30]         ; 0040b246
    FCOMPP                              ; 0040b24a
    FNSTSW AX                           ; 0040b24c
    SAHF                                ; 0040b24e
    JBE 0x0040b29d                      ; 0040b24f
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    FLD float ptr [ESP + 0x2c]          ; 0040b251
    FLD1                                ; 0040b255
    FCOMPP                              ; 0040b257
    FNSTSW AX                           ; 0040b259
    SAHF                                ; 0040b25b
    JBE 0x0040b29d                      ; 0040b25c
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    FLD float ptr [ESP + 0x30]          ; 0040b25e
    FST double ptr [ESP]                ; 0040b262
    FCOMP double ptr [0x005777a9]       ; 0040b265 | DOUBLE_005777a9
    FNSTSW AX                           ; 0040b26b
    SAHF                                ; 0040b26d
    JBE 0x0040b29d                      ; 0040b26e
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    FLD double ptr [ESP]                ; 0040b270
    FCOMP double ptr [0x005777b1]       ; 0040b273 | DOUBLE_005777b1
    FNSTSW AX                           ; 0040b279
    SAHF                                ; 0040b27b
    JNC 0x0040b29d                      ; 0040b27c
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    FLD float ptr [ESP + 0x30]          ; 0040b27e
    FCOMP float ptr [ESP + 0x28]        ; 0040b282
    FNSTSW AX                           ; 0040b286
    SAHF                                ; 0040b288
    JBE 0x0040b29d                      ; 0040b289
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    FLD float ptr [ESP + 0x30]          ; 0040b28b
    FCOMP float ptr [ESP + 0x2c]        ; 0040b28f
    FNSTSW AX                           ; 0040b293
    SAHF                                ; 0040b295
    JBE 0x0040b29d                      ; 0040b296
        ;   XREF to: 0040b29d (CONDITIONAL_JUMP)  ; LAB_0040b29d
    MOV EBX,0x2                         ; 0040b298
    FLD float ptr [ESP + 0x28]          ; 0040b29d
        ;   Label: LAB_0040b29d
    FLD1                                ; 0040b2a1
    FCOMPP                              ; 0040b2a3
    FNSTSW AX                           ; 0040b2a5
    SAHF                                ; 0040b2a7
    JBE 0x0040b2f8                      ; 0040b2a8
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    FLD float ptr [ESP + 0x2c]          ; 0040b2aa
    FLD1                                ; 0040b2ae
    FCOMPP                              ; 0040b2b0
    FNSTSW AX                           ; 0040b2b2
    SAHF                                ; 0040b2b4
    JBE 0x0040b2f8                      ; 0040b2b5
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    FLD float ptr [ESP + 0x30]          ; 0040b2b7
    FLD1                                ; 0040b2bb
    FXCH                                ; 0040b2bd
    FSTP double ptr [ESP + 0x8]         ; 0040b2bf
    FCOMP double ptr [ESP + 0x8]        ; 0040b2c3
    FNSTSW AX                           ; 0040b2c7
    SAHF                                ; 0040b2c9
    JNC 0x0040b2f8                      ; 0040b2ca
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    FLD double ptr [ESP + 0x8]          ; 0040b2cc
    FCOMP double ptr [0x005777a9]       ; 0040b2d0 | DOUBLE_005777a9
    FNSTSW AX                           ; 0040b2d6
    SAHF                                ; 0040b2d8
    JNC 0x0040b2f8                      ; 0040b2d9
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    FLD float ptr [ESP + 0x30]          ; 0040b2db
    FCOMP float ptr [ESP + 0x28]        ; 0040b2df
    FNSTSW AX                           ; 0040b2e3
    SAHF                                ; 0040b2e5
    JBE 0x0040b2f8                      ; 0040b2e6
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    FLD float ptr [ESP + 0x30]          ; 0040b2e8
    FCOMP float ptr [ESP + 0x2c]        ; 0040b2ec
    FNSTSW AX                           ; 0040b2f0
    SAHF                                ; 0040b2f2
    JBE 0x0040b2f8                      ; 0040b2f3
        ;   XREF to: 0040b2f8 (CONDITIONAL_JUMP)  ; LAB_0040b2f8
    OR BL,0x4                           ; 0040b2f5
    MOV EAX,EBX                         ; 0040b2f8
        ;   Label: LAB_0040b2f8
    MOV ESP,EBP                         ; 0040b2fa
    POP EBP                             ; 0040b2fc
    POP EBX                             ; 0040b2fd
    RET                                 ; 0040b2fe

