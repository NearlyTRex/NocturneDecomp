; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566c44(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00566b90 at 00566b95
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   void* PTR_FUN_005c1ad8 = 005671e4
;   void* PTR_FUN_005c1ae0 = 005671e4
;
; Called Functions:
;   FUN_00566ba0
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566c44
        ;   Label: FUN_00566c44
    CALL dword ptr [0x005c1ad8]         ; 00566c45 | PTR_FUN_005c1ad8
    MOV EDX,dword ptr [0x005c1680]      ; 00566c4b | DAT_005c1680
    PUSH EDX                            ; 00566c51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00566c52
    PUSH EBX                            ; 00566c56
    CALL FUN_00566ba0                   ; 00566c57
        ;   XREF to: 00566ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00566ba0()
    ADD ESP,0x8                         ; 00566c5c
    MOV EBX,EAX                         ; 00566c5f
    CALL dword ptr [0x005c1ae0]         ; 00566c61 | PTR_FUN_005c1ae0
    MOV EAX,EBX                         ; 00566c67
    POP EBX                             ; 00566c69
    RET                                 ; 00566c6a

