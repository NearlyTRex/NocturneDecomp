; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0051d380(int param_1,undefined4 *param_2,int param_3)
;
;
; XREF[9]:
;   FUN_004278e0 at 0042791e
;   FUN_00427990 at 004279ce
;   FUN_00429730 at 00429b39
;   FUN_0045ab40 at 0045abc5
;   FUN_004b3f40 at 004b3f5c
;   FUN_004bb3c0 at 004bb3dc
;   FUN_004d4f30 at 004d548f
;   FUN_00535900 at 00536821
;   FUN_00542b70 at 00542bdd
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

