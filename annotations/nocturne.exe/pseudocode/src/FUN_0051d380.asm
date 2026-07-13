; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0051d380(int param_1,undefined4 *param_2,int param_3)
;
;
; XREF[46]:
;   FUN_00413040 at 00413094
;   FUN_00413250 at 00413274
;   FUN_00413800 at 00413b09
;   FUN_00414930 at 00414984
;   FUN_00414b40 at 00414b67
;   FUN_004151e0 at 004151f9
;   FUN_004159c0 at 004159d9
;   FUN_00419fc0 at 00419ff3
;   FUN_00420c40 at 00420c83
;   FUN_00420e20 at 00420e55
;   ... and 36 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0051d380
        ;   Label: FUN_0051d380
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051d384
    LEA EAX,[ECX*0x4 + 0x0]             ; 0051d388
    SUB EAX,ECX                         ; 0051d38f
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051d391
    SHL EAX,0x4                         ; 0051d395
    ADD EAX,ECX                         ; 0051d398
    MOV ECX,dword ptr [EAX + 0xe8c]     ; 0051d39a
    MOV dword ptr [EDX],ECX             ; 0051d3a0
    MOV ECX,dword ptr [EAX + 0xe9c]     ; 0051d3a2
    MOV dword ptr [EDX + 0x4],ECX       ; 0051d3a8
    MOV ECX,dword ptr [EAX + 0xeac]     ; 0051d3ab
    MOV dword ptr [EDX + 0x8],ECX       ; 0051d3b1
    MOV EAX,EDX                         ; 0051d3b4
    RET                                 ; 0051d3b6

