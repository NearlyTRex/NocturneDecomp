; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_004791a0(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00479188 = 00479254
;   undefined1* PTR_caseD_3_00479190 = 00479239
;   undefined4 DAT_01c22258
;   undefined4 DAT_01c2231c
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_00478900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004791a0
        ;   Label: core_dtri.cpp_FUN_004791a0
    PUSH ESI                            ; 004791a1
    PUSH EDI                            ; 004791a2
    PUSH EBP                            ; 004791a3
    MOV EBP,ESP                         ; 004791a4
    SUB ESP,0x8                         ; 004791a6
    AND ESP,0xfffffff8                  ; 004791a9
    MOV EBX,dword ptr [0x01c2231c]      ; 004791ac | DAT_01c2231c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004791b2
    MOV dword ptr [ESP],EDX             ; 004791b5
    MOV EDX,dword ptr [0x01c22258]      ; 004791b8 | DAT_01c22258
    XOR EDI,EDI                         ; 004791be
    TEST EDX,EDX                        ; 004791c0
    JLE 0x00479247                      ; 004791c2
        ;   XREF to: 00479247 (CONDITIONAL_JUMP)  ; LAB_00479247
    MOV ESI,0x1c2225c                   ; 004791c8
    MOV EAX,[0x01c22258]                ; 004791cd | DAT_01c22258
        ;   Label: LAB_004791cd
    LEA ECX,[EDI + 0x1]                 ; 004791d2
    CMP ECX,EAX                         ; 004791d5
    JNZ 0x004791db                      ; 004791d7
        ;   XREF to: 004791db (CONDITIONAL_JUMP)  ; LAB_004791db
    XOR ECX,EAX                         ; 004791d9
    IMUL ECX,ECX,0xc                    ; 004791db
        ;   Label: LAB_004791db
    MOV EAX,0x1c2225c                   ; 004791de
    FLD float ptr [ESI + 0x8]           ; 004791e3
    ADD EAX,ECX                         ; 004791e6
    MOV EDX,ESI                         ; 004791e8
    MOV dword ptr [ESP + 0x4],EAX       ; 004791ea
    XOR ECX,ECX                         ; 004791ee
    FCOMP float ptr [ESP]               ; 004791f0
    FNSTSW AX                           ; 004791f3
    SAHF                                ; 004791f5
    JBE 0x004791fd                      ; 004791f6
        ;   XREF to: 004791fd (CONDITIONAL_JUMP)  ; LAB_004791fd
    MOV ECX,0x1                         ; 004791f8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004791fd
        ;   Label: LAB_004791fd
    FLD float ptr [EAX + 0x8]           ; 00479201
    FCOMP float ptr [ESP]               ; 00479204
    FNSTSW AX                           ; 00479207
    SAHF                                ; 00479209
    JBE 0x0047920f                      ; 0047920a
        ;   XREF to: 0047920f (CONDITIONAL_JUMP)  ; LAB_0047920f
    OR CL,0x2                           ; 0047920c
    CMP ECX,0x3                         ; 0047920f
        ;   Label: LAB_0047920f
    JA 0x00479239                       ; 00479212
        ;   XREF to: 00479239 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x479184]  ; 00479214 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0047921b
        ;   Label: caseD_0
    ADD ECX,0x1c22320                   ; 0047921e
    CMP ECX,EDX                         ; 00479224
    JZ 0x00479238                       ; 00479226
        ;   XREF to: 00479238 (CONDITIONAL_JUMP)  ; LAB_00479238
    MOV EAX,dword ptr [EDX]             ; 00479228
    MOV dword ptr [ECX],EAX             ; 0047922a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047922c
    MOV dword ptr [ECX + 0x4],EAX       ; 0047922f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00479232
    MOV dword ptr [ECX + 0x8],EAX       ; 00479235
    INC EBX                             ; 00479238
        ;   Label: LAB_00479238
    MOV ECX,dword ptr [0x01c22258]      ; 00479239 | DAT_01c22258
        ;   Label: caseD_3
    INC EDI                             ; 0047923f
    ADD ESI,0xc                         ; 00479240
    CMP EDI,ECX                         ; 00479243
    JL 0x004791cd                       ; 00479245
        ;   XREF to: 004791cd (CONDITIONAL_JUMP)  ; LAB_004791cd
    MOV dword ptr [0x01c2231c],EBX      ; 00479247 | DAT_01c2231c
        ;   Label: LAB_00479247
    MOV ESP,EBP                         ; 0047924d
    POP EBP                             ; 0047924f
    POP EDI                             ; 00479250
    POP ESI                             ; 00479251
    POP EBX                             ; 00479252
    RET                                 ; 00479253
    IMUL ECX,EBX,0xc                    ; 00479254
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00479257
    SUB ESP,0x8                         ; 0047925a
    FSTP double ptr [ESP]               ; 0047925d
    PUSH 0xbff00000                     ; 00479260
    PUSH 0x0                            ; 00479265
    PUSH 0x0                            ; 00479267
    PUSH 0x0                            ; 00479269
    PUSH 0x0                            ; 0047926b
    PUSH 0x0                            ; 0047926d
    ADD ECX,0x1c22320                   ; 0047926f
    PUSH ECX                            ; 00479275
    PUSH EDX                            ; 00479276
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00479277
    PUSH EAX                            ; 0047927b
    MOV dword ptr [0x01c2231c],EBX      ; 0047927c | DAT_01c2231c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 00479282
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EBX,dword ptr [0x01c2231c]      ; 00479287 | DAT_01c2231c
    ADD ESP,0x2c                        ; 0047928d
    JMP 0x00479238                      ; 00479290
        ;   XREF to: 00479238 (UNCONDITIONAL_JUMP)  ; LAB_00479238
    IMUL ECX,EBX,0xc                    ; 00479292
        ;   Label: caseD_2
    ADD ECX,0x1c22320                   ; 00479295
    CMP ECX,EDX                         ; 0047929b
    JZ 0x004792af                       ; 0047929d
        ;   XREF to: 004792af (CONDITIONAL_JUMP)  ; LAB_004792af
    MOV EAX,dword ptr [EDX]             ; 0047929f
    MOV dword ptr [ECX],EAX             ; 004792a1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004792a3
    MOV dword ptr [ECX + 0x4],EAX       ; 004792a6
    MOV EAX,dword ptr [EDX + 0x8]       ; 004792a9
    MOV dword ptr [ECX + 0x8],EAX       ; 004792ac
    INC EBX                             ; 004792af
        ;   Label: LAB_004792af
    IMUL ECX,EBX,0xc                    ; 004792b0
    FLD float ptr [ESP]                 ; 004792b3
    SUB ESP,0x8                         ; 004792b6
    FSTP double ptr [ESP]               ; 004792b9
    PUSH 0xbff00000                     ; 004792bc
    PUSH 0x0                            ; 004792c1
    PUSH 0x0                            ; 004792c3
    PUSH 0x0                            ; 004792c5
    PUSH 0x0                            ; 004792c7
    PUSH 0x0                            ; 004792c9
    ADD ECX,0x1c22320                   ; 004792cb
    PUSH ECX                            ; 004792d1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004792d2
    PUSH ECX                            ; 004792d6
    PUSH EDX                            ; 004792d7
    MOV dword ptr [0x01c2231c],EBX      ; 004792d8 | DAT_01c2231c
    CALL core_dtri.cpp_clipLineToPlane_FUN_00478900 ; 004792de
        ;   XREF to: 00478900 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_00478900()
    MOV EBX,dword ptr [0x01c2231c]      ; 004792e3 | DAT_01c2231c
    ADD ESP,0x2c                        ; 004792e9
    JMP 0x00479238                      ; 004792ec
        ;   XREF to: 00479238 (UNCONDITIONAL_JUMP)  ; LAB_00479238

