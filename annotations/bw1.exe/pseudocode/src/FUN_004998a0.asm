; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004998a0(int param_1,int param_2)
;
;
; XREF[17]:
;   FUN_00494690 at 0049475d
;   FUN_00499420 at 00499455
;   FUN_004998b0 at 004998cf
;   FUN_00499960 at 00499976
;   FUN_004999a0 at 004999d8
;   FUN_00499ba0 at 00499bb7
;   FUN_00499c80 at 00499cf6
;   FUN_0049a0d0 at 0049a23c
;   FUN_0049a9b0 at 0049ab38
;   FUN_0049b060 at 0049b0f3
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004998a0
        ;   Label: FUN_004998a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004998a4
    MOV EAX,dword ptr [EAX + 0x8]       ; 004998a8
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 004998ab
    RET                                 ; 004998ae

