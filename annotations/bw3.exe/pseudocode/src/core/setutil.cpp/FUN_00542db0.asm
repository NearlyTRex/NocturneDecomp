; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542db0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0048c2e0 at 00490034
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d1046
;   TerminatedCString s_C3DSLight_advanceFilter_005d105a
;   TerminatedCString s_core_setutil_cpp_005d108f
;   TerminatedCString s_C3DSLight_setFilterFrame_005d10a3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_0045db40
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542db0
        ;   Label: FUN_00542db0
    PUSH ESI                            ; 00542db1
    PUSH EDI                            ; 00542db2
    PUSH EBP                            ; 00542db3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00542db4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00542db8
    CMP dword ptr [ESP + 0x1c],0x0      ; 00542dbc
    JZ 0x00542dfb                       ; 00542dc1
        ;   XREF to: 00542dfb (CONDITIONAL_JUMP)  ; LAB_00542dfb
    TEST ESI,ESI                        ; 00542dc3
        ;   Label: LAB_00542dc3
    JL 0x00542e20                       ; 00542dc5
        ;   XREF to: 00542e20 (CONDITIONAL_JUMP)  ; LAB_00542e20
    CMP ESI,dword ptr [EBX + 0x11ec]    ; 00542dc7
    JGE 0x00542e20                      ; 00542dcd
        ;   XREF to: 00542e20 (CONDITIONAL_JUMP)  ; LAB_00542e20
    PUSH 0x0                            ; 00542dcf
        ;   Label: LAB_00542dcf
    MOV dword ptr [EBX + 0x1890],ESI    ; 00542dd1
    PUSH 0x0                            ; 00542dd7
    MOV ECX,dword ptr [EBX + ESI*0x4 + 0x1774] ; 00542dd9
    PUSH ECX                            ; 00542de0
    MOV EDI,dword ptr [EBX + ESI*0x4 + 0x1810] ; 00542de1
    PUSH EDI                            ; 00542de8
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00542de9
    PUSH EBP                            ; 00542ded
    CALL FUN_0045db40                   ; 00542dee
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 00542df3
    POP EBP                             ; 00542df6
    POP EDI                             ; 00542df7
    POP ESI                             ; 00542df8
    POP EBX                             ; 00542df9
    RET                                 ; 00542dfa
    MOV ECX,0x5d1046                    ; 00542dfb | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00542dfb
    MOV EDI,0x39f                       ; 00542e00
    PUSH 0x5d105a                       ; 00542e05 | = "C3DSLight::advanceFilter - NULL CDemo..."
    MOV dword ptr [0x01d71de0],ECX      ; 00542e0a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00542e10 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00542e16
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00542e1b
    JMP 0x00542dc3                      ; 00542e1e
        ;   XREF to: 00542dc3 (UNCONDITIONAL_JUMP)  ; LAB_00542dc3
    MOV EAX,0x5d108f                    ; 00542e20 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00542e20
    MOV EDX,0x3a3                       ; 00542e25
    PUSH 0x5d10a3                       ; 00542e2a | = "C3DSLight::setFilterFrame - invalid f..."
    MOV [0x01d71de0],EAX                ; 00542e2f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00542e34 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00542e3a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00542e3f
    JMP 0x00542dcf                      ; 00542e42
        ;   XREF to: 00542dcf (UNCONDITIONAL_JUMP)  ; LAB_00542dcf

