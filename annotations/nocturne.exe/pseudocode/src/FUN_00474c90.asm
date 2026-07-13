; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00474c90(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_00470230 at 0047026f
;   FUN_00470310 at 0047034f
;   FUN_004703f0 at 00470430
;   FUN_00470550 at 00470569
;   FUN_0049da10 at 0049defd
;   FUN_004a4b50 at 004a4f3b
;   FUN_004d12e0 at 004d20db
;   FUN_004d2d00 at 004d3af7
;   FUN_004d9c20 at 004d9c33
;   FUN_0052ed40 at 0052ed4c
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059ca94 = 00474cf0
;
; Called Functions:
;   FUN_00473b60
;   FUN_00476450
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00474c90
        ;   Label: FUN_00474c90
    PUSH EAX                            ; 00474c94
    CALL FUN_00473b60                   ; 00474c95
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x4                         ; 00474c9a
    ADD EAX,0x138                       ; 00474c9d
    PUSH EAX                            ; 00474ca2
    CALL FUN_00476450                   ; 00474ca3
        ;   XREF to: 00476450 (UNCONDITIONAL_CALL)  ; undefined FUN_00476450()
    MOV dword ptr [EAX + 0xfffffed4],0x59ca94 ; 00474ca8 | PTR_FUN_0059ca94
    MOV dword ptr [EAX + 0xfffffed8],0x0 ; 00474cb2
    MOV byte ptr [EAX + 0xfffffedc],0x0 ; 00474cbc
    MOV dword ptr [EAX + 0x34],0x0      ; 00474cc3
    MOV dword ptr [EAX + 0xffffff40],0x0 ; 00474cca
    MOV dword ptr [EAX + -0x8],0x0      ; 00474cd4
    ADD ESP,0x4                         ; 00474cdb
    MOV dword ptr [EAX + -0x4],0x0      ; 00474cde
    SUB EAX,0x138                       ; 00474ce5
    RET                                 ; 00474cea

