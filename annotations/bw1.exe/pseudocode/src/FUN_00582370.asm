; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00582370(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   FUN_0043c190 at 0043c2f0
;   FUN_0043de60 at 0043dfa4
;   FUN_0047a480 at 0047a501
;   FUN_0047ab00 at 0047ab7d
;   FUN_0053e650 at 0053e726
;   FUN_0053f720 at 0053f7e0
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833c8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582370 | DAT_01c50948
        ;   Label: FUN_00582370
    JNZ 0x0058237c                      ; 00582377
        ;   XREF to: 0058237c (CONDITIONAL_JUMP)  ; LAB_0058237c
    XOR EAX,EAX                         ; 00582379
    RET                                 ; 0058237b
    PUSH ESI                            ; 0058237c
        ;   Label: LAB_0058237c
    PUSH EBX                            ; 0058237d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0058237e
    PUSH ECX                            ; 00582382
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582383
    PUSH EBX                            ; 00582387
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582388
    PUSH ESI                            ; 0058238c
    CALL dword ptr [0x02c833c8]         ; 0058238d | DAT_02c833c8
    ADD ESP,0xc                         ; 00582393
    POP EBX                             ; 00582396
    POP ESI                             ; 00582397
    RET                                 ; 00582398

