; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9ad0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[18]:
;   FUN_00411a10 at 00411d32
;   FUN_00412f40 at 00413646
;   FUN_0041dbe0 at 0041dde4
;   FUN_004392b0 at 0043965a
;   FUN_0045e360 at 0045e7a4
;   FUN_00462ff0 at 00463db9
;   FUN_0046d870 at 0046dd46
;   FUN_004c1bb0 at 004c2703
;   FUN_004d3a70 at 004d3d67
;   FUN_004d6980 at 004d6fdb
;   ... and 8 more
;
; Called Functions:
;   FUN_004c8d10
;   FUN_004c9a80
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004c9ad0
        ;   Label: FUN_004c9ad0
    JNZ 0x004c9ad8                      ; 004c9ad5
        ;   XREF to: 004c9ad8 (CONDITIONAL_JUMP)  ; LAB_004c9ad8
    RET                                 ; 004c9ad7
    PUSH ESI                            ; 004c9ad8
        ;   Label: LAB_004c9ad8
    PUSH EBX                            ; 004c9ad9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c9ada
    PUSH ECX                            ; 004c9ade
    CALL FUN_004c9a80                   ; 004c9adf
        ;   XREF to: 004c9a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9a80()
    ADD ESP,0x4                         ; 004c9ae4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c9ae7
    PUSH EBX                            ; 004c9aeb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c9aec
    PUSH ESI                            ; 004c9af0
    PUSH EAX                            ; 004c9af1
    CALL FUN_004c8d10                   ; 004c9af2
        ;   XREF to: 004c8d10 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8d10()
    ADD ESP,0xc                         ; 004c9af7
    POP EBX                             ; 004c9afa
    POP ESI                             ; 004c9afb
    RET                                 ; 004c9afc

