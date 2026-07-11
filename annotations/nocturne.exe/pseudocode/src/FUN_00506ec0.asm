; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506ec0(int param_1)
;
;
; XREF[1]:
;   FUN_00506f10 at 00506f48
;
; Referenced Globals:
;   undefined4 DAT_005c1144
;
; Called Functions:
;   FUN_00452f10
;   FUN_00514430
;   FUN_005492f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506ec0
        ;   Label: FUN_00506ec0
    PUSH ESI                            ; 00506ec1
    PUSH 0x1fbacc8                      ; 00506ec2
    CALL FUN_00452f10                   ; 00506ec7
        ;   XREF to: 00452f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00452f10()
    ADD ESP,0x4                         ; 00506ecc
    MOV ESI,dword ptr [ESP + 0xc]       ; 00506ecf
    ADD ESI,0x4                         ; 00506ed3
    MOV EBX,ESI                         ; 00506ed6
    ADD ESI,0x19640                     ; 00506ed8
    PUSH EBX                            ; 00506ede
        ;   Label: LAB_00506ede
    CALL FUN_00514430                   ; 00506edf
        ;   XREF to: 00514430 (UNCONDITIONAL_CALL)  ; undefined FUN_00514430()
    ADD EBX,0x1a0                       ; 00506ee4
    ADD ESP,0x4                         ; 00506eea
    CMP EBX,ESI                         ; 00506eed
    JNZ 0x00506ede                      ; 00506eef
        ;   XREF to: 00506ede (CONDITIONAL_JUMP)  ; LAB_00506ede
    MOV EDX,dword ptr [0x005c1144]      ; 00506ef1 | DAT_005c1144
    PUSH EDX                            ; 00506ef7
    CALL FUN_005492f0                   ; 00506ef8
        ;   XREF to: 005492f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005492f0()
    ADD ESP,0x4                         ; 00506efd
    POP ESI                             ; 00506f00
    POP EBX                             ; 00506f01
    RET                                 ; 00506f02

