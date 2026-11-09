; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00570db0(char *param_1,char *param_2)
;
;
; XREF[1]:
;   support_trisock.cpp_FUN_0057125e at 005712c4
;
; Called Functions:
;   support_trisock.cpp_FUN_00570e80
;   support_trisock.cpp_FUN_00570ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570db0
        ;   Label: support_trisock.cpp_FUN_00570db0
    PUSH ESI                            ; 00570db1
    PUSH EDI                            ; 00570db2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00570db3
    PUSH EBX                            ; 00570db7
    CALL support_trisock.cpp_FUN_00570e80 ; 00570db8
        ;   XREF to: 00570e80 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570e80()
    ADD ESP,0x4                         ; 00570dbd
    MOV EDI,EBX                         ; 00570dc0
    MOV ESI,dword ptr [ESP + 0x14]      ; 00570dc2
    PUSH EDI                            ; 00570dc6
    MOV AL,byte ptr [ESI]               ; 00570dc7
        ;   Label: LAB_00570dc7
    MOV byte ptr [EDI],AL               ; 00570dc9
    CMP AL,0x0                          ; 00570dcb
    JZ 0x00570ddf                       ; 00570dcd
        ;   XREF to: 00570ddf (CONDITIONAL_JUMP)  ; LAB_00570ddf
    MOV AL,byte ptr [ESI + 0x1]         ; 00570dcf
    ADD ESI,0x2                         ; 00570dd2
    MOV byte ptr [EDI + 0x1],AL         ; 00570dd5
    ADD EDI,0x2                         ; 00570dd8
    CMP AL,0x0                          ; 00570ddb
    JNZ 0x00570dc7                      ; 00570ddd
        ;   XREF to: 00570dc7 (CONDITIONAL_JUMP)  ; LAB_00570dc7
    POP EDI                             ; 00570ddf
        ;   Label: LAB_00570ddf
    PUSH EBX                            ; 00570de0
    CALL support_trisock.cpp_FUN_00570ea0 ; 00570de1
        ;   XREF to: 00570ea0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570ea0()
    ADD ESP,0x4                         ; 00570de6
    POP EDI                             ; 00570de9
    POP ESI                             ; 00570dea
    POP EBX                             ; 00570deb
    RET                                 ; 00570dec

