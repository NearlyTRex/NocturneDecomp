; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542b60(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00539c50 at 00539cef
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d0fba
;   TerminatedCString s_C3DSLight_process_NULL_C_005d0fce
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d21620
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0203277c
;
; Called Functions:
;   FUN_0045db40
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542b60
        ;   Label: FUN_00542b60
    PUSH ESI                            ; 00542b61
    PUSH EDI                            ; 00542b62
    PUSH EBP                            ; 00542b63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00542b64
    MOV ESI,dword ptr [ESP + 0x18]      ; 00542b68
    TEST ESI,ESI                        ; 00542b6c
    JZ 0x00542ce0                       ; 00542b6e
        ;   XREF to: 00542ce0 (CONDITIONAL_JUMP)  ; LAB_00542ce0
    CMP dword ptr [EBX + 0x11ec],0x0    ; 00542b74
        ;   Label: LAB_00542b74
    JZ 0x00542c69                       ; 00542b7b
        ;   XREF to: 00542c69 (CONDITIONAL_JUMP)  ; LAB_00542c69
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00542b81
    FLD float ptr [EBX + EAX*0x4 + 0x16f4] ; 00542b87
    FLDZ                                ; 00542b8e
    FCOMPP                              ; 00542b90
    FNSTSW AX                           ; 00542b92
    SAHF                                ; 00542b94
    JNC 0x00542bfc                      ; 00542b95
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    MOV EDX,dword ptr [0x005fe9dc]      ; 00542b97 | DAT_005fe9dc
    LEA EAX,[EBX + 0x1894]              ; 00542b9d
    FLD float ptr [EDX + 0x314]         ; 00542ba3 | DAT_01d21620
    FADD float ptr [EAX]                ; 00542ba9
    FSTP float ptr [EAX]                ; 00542bab
    MOV EDX,dword ptr [EBX + 0x1890]    ; 00542bad
    SHL EDX,0x2                         ; 00542bb3
    ADD EDX,EBX                         ; 00542bb6
    FLD float ptr [EBX + 0x1894]        ; 00542bb8
    FCOMP float ptr [EDX + 0x16f4]      ; 00542bbe
    FNSTSW AX                           ; 00542bc4
    SAHF                                ; 00542bc6
    JBE 0x00542bfc                      ; 00542bc7
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    FLD float ptr [EDX + 0x16f4]        ; 00542bc9
    MOV EBP,dword ptr [EBX + 0x1890]    ; 00542bcf
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00542bd5
    FSUBR float ptr [EBX + 0x1894]      ; 00542bdb
    INC EBP                             ; 00542be1
    FSTP float ptr [EBX + 0x1894]       ; 00542be2
    MOV dword ptr [EBX + 0x1890],EBP    ; 00542be8
    CMP EBP,EDX                         ; 00542bee
    JL 0x00542bfc                       ; 00542bf0
        ;   XREF to: 00542bfc (CONDITIONAL_JUMP)  ; LAB_00542bfc
    MOV dword ptr [EBX + 0x1890],0x0    ; 00542bf2
    MOV EAX,[0x01c5fad0]                ; 00542bfc | DAT_01c5fad0
        ;   Label: LAB_00542bfc
    MOV EDX,dword ptr [EBX + 0x17f8]    ; 00542c01
    IMUL EDX                            ; 00542c07
    SHRD EAX,EDX,0x10                   ; 00542c09
    MOV ECX,dword ptr [EBX + 0x1800]    ; 00542c0d
    MOV EDX,dword ptr [EBX + 0x17fc]    ; 00542c13
    ADD ECX,EAX                         ; 00542c19
    MOV EAX,[0x01c5fad0]                ; 00542c1b | DAT_01c5fad0
    MOV dword ptr [EBX + 0x1800],ECX    ; 00542c20
    IMUL EDX                            ; 00542c26
    SHRD EAX,EDX,0x10                   ; 00542c28
    MOV EDI,dword ptr [EBX + 0x1804]    ; 00542c2c
    ADD EDI,EAX                         ; 00542c32
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00542c34
    MOV dword ptr [EBX + 0x1804],EDI    ; 00542c38
    TEST EBP,EBP                        ; 00542c3e
    JZ 0x00542c69                       ; 00542c40
        ;   XREF to: 00542c69 (CONDITIONAL_JUMP)  ; LAB_00542c69
    PUSH EDI                            ; 00542c42
    MOV EDX,dword ptr [EBX + 0x1800]    ; 00542c43
    MOV EAX,dword ptr [EBX + 0x1890]    ; 00542c49
    PUSH EDX                            ; 00542c4f
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x1774] ; 00542c50
    PUSH ECX                            ; 00542c57
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1810] ; 00542c58
    PUSH EDI                            ; 00542c5f
    PUSH ESI                            ; 00542c60
    CALL FUN_0045db40                   ; 00542c61
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 00542c66
    FLD float ptr [EBX + 0x11e0]        ; 00542c69
        ;   Label: LAB_00542c69
    FLD1                                ; 00542c6f
    FCOMPP                              ; 00542c71
    FNSTSW AX                           ; 00542c73
    SAHF                                ; 00542c75
    JBE 0x00542ccc                      ; 00542c76
        ;   XREF to: 00542ccc (CONDITIONAL_JUMP)  ; LAB_00542ccc
    MOV EDX,dword ptr [0x005fe9dc]      ; 00542c78 | DAT_005fe9dc
    LEA EAX,[EBX + 0x11e8]              ; 00542c7e
    FLD float ptr [EDX + 0x314]         ; 00542c84 | DAT_01d21620
    FADD float ptr [EAX]                ; 00542c8a
    FSTP float ptr [EAX]                ; 00542c8c
    FLD float ptr [EBX + 0x11e8]        ; 00542c8e
    FCOMP float ptr [EBX + 0x11e4]      ; 00542c94
    FNSTSW AX                           ; 00542c9a
    SAHF                                ; 00542c9c
    JBE 0x00542cb1                      ; 00542c9d
        ;   XREF to: 00542cb1 (CONDITIONAL_JUMP)  ; LAB_00542cb1
    FLD float ptr [EBX + 0x11e4]        ; 00542c9f
    FSUBR float ptr [EBX + 0x11e8]      ; 00542ca5
    FSTP float ptr [EBX + 0x11e8]       ; 00542cab
    FLD float ptr [EBX + 0x11e8]        ; 00542cb1
        ;   Label: LAB_00542cb1
    FCOMP float ptr [EBX + 0x11e0]      ; 00542cb7
    FNSTSW AX                           ; 00542cbd
    SAHF                                ; 00542cbf
    JBE 0x00542d08                      ; 00542cc0
        ;   XREF to: 00542d08 (CONDITIONAL_JUMP)  ; LAB_00542d08
    MOV dword ptr [ESI + 0x1cb4],0x0    ; 00542cc2
    MOV EAX,[0x00603b28]                ; 00542ccc | DAT_00603b28
        ;   Label: LAB_00542ccc
    MOV EAX,dword ptr [EAX + 0x15aeb4]  ; 00542cd1 | DAT_0203277c
    TEST EAX,EAX                        ; 00542cd7
    JZ 0x00542d14                       ; 00542cd9
        ;   XREF to: 00542d14 (CONDITIONAL_JUMP)  ; LAB_00542d14
    POP EBP                             ; 00542cdb
    POP EDI                             ; 00542cdc
    POP ESI                             ; 00542cdd
    POP EBX                             ; 00542cde
    RET                                 ; 00542cdf
    MOV EDX,0x5d0fba                    ; 00542ce0 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00542ce0
    MOV ECX,0x351                       ; 00542ce5
    PUSH 0x5d0fce                       ; 00542cea | = "C3DSLight::process - NULL CDemonLight..."
    MOV dword ptr [0x01d71de0],EDX      ; 00542cef | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00542cf5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00542cfb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00542d00
    JMP 0x00542b74                      ; 00542d03
        ;   XREF to: 00542b74 (UNCONDITIONAL_JUMP)  ; LAB_00542b74
    MOV dword ptr [ESI + 0x1cb4],0x1    ; 00542d08
        ;   Label: LAB_00542d08
    JMP 0x00542ccc                      ; 00542d12
        ;   XREF to: 00542ccc (UNCONDITIONAL_JUMP)  ; LAB_00542ccc
    MOV dword ptr [ESI + 0x1cb4],EAX    ; 00542d14
        ;   Label: LAB_00542d14
    POP EBP                             ; 00542d1a
    POP EDI                             ; 00542d1b
    POP ESI                             ; 00542d1c
    POP EBX                             ; 00542d1d
    RET                                 ; 00542d1e

