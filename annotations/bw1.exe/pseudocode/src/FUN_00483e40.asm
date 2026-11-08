; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483e40(int param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_00462820 at 00462992
;   FUN_00462ad0 at 00462b43
;   FUN_00462be0 at 00462c99
;   FUN_00462cd0 at 00462d12
;   FUN_00481eb0 at 00481f06
;   FUN_004e1db0 at 004e1e2d
;   FUN_00559f80 at 0055a02f
;   FUN_0055b330 at 0055b353
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483e40
        ;   Label: FUN_00483e40
    MOV EDX,dword ptr [ESP + 0x4]       ; 00483e44
    MOV [0x00713a74],EAX                ; 00483e48 | DAT_00713a74
    MOV dword ptr [EDX + 0x4],EAX       ; 00483e4d
    RET                                 ; 00483e50

