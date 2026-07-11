; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568eb8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0056c6d0 at 0056c6d6
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00568eb8 | PTR_FUN_005c1abc
        ;   Label: FUN_00568eb8
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568ebe
    MOV dword ptr [EAX + 0x8],EDX       ; 00568ec2
    RET                                 ; 00568ec5

