; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c8e45(int param_1,uint param_2)
;
;
; XREF[6]:
;   FUN_005c1fd7 at 005c1fec
;   FUN_005c2019 at 005c2055
;   FUN_005cc4d2 at 005cc523
;   FUN_005cdc9c at 005cdcd3
;   FUN_005ce203 at 005ce252
;   FUN_005ce269 at 005ce2d6
;
; Called Functions:
;   FUN_005cc3d2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8e45
        ;   Label: FUN_005c8e45
    SUB ESP,0x4                         ; 005c8e46
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c8e49
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c8e4d
    MOV ECX,dword ptr [EAX + 0x10]      ; 005c8e51
    OR ECX,EDX                          ; 005c8e54
    MOV EBX,dword ptr [EAX + 0x14]      ; 005c8e56
    MOV EDX,ECX                         ; 005c8e59
    MOV dword ptr [EAX + 0x10],ECX      ; 005c8e5b
    AND EDX,EBX                         ; 005c8e5e
    JNZ 0x005c8e67                      ; 005c8e60
        ;   XREF to: 005c8e67 (CONDITIONAL_JUMP)  ; LAB_005c8e67
    ADD ESP,0x4                         ; 005c8e62
    POP EBX                             ; 005c8e65
    RET                                 ; 005c8e66
    PUSH EDX                            ; 005c8e67
        ;   Label: LAB_005c8e67
    LEA EAX,[ESP + 0x4]                 ; 005c8e68
    PUSH EAX                            ; 005c8e6c
    CALL FUN_005cc3d2                   ; 005c8e6d
        ;   XREF to: 005cc3d2 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc3d2()
    ADD ESP,0x8                         ; 005c8e72
    ADD ESP,0x4                         ; 005c8e75
    POP EBX                             ; 005c8e78
    RET                                 ; 005c8e79

