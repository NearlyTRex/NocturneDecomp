; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005337e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00533f40 at 0053402d
;
; Called Functions:
;   FUN_00533810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005337e0
        ;   Label: FUN_005337e0
    PUSH ESI                            ; 005337e1
    PUSH 0x48                           ; 005337e2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005337e4
    PUSH EDX                            ; 005337e8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005337e9
    PUSH ECX                            ; 005337ed
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005337ee
    PUSH EBX                            ; 005337f2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005337f3
    PUSH ESI                            ; 005337f7
    CALL FUN_00533810                   ; 005337f8
        ;   XREF to: 00533810 (UNCONDITIONAL_CALL)  ; undefined FUN_00533810()
    ADD ESP,0x14                        ; 005337fd
    POP ESI                             ; 00533800
    POP EBX                             ; 00533801
    RET                                 ; 00533802

