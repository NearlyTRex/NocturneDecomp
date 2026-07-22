; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(int param_1,undefined4 *param_2,int param_3)
;
;
; XREF[46]:
;   FUN_00414930 at 00414984
;   FUN_00414b40 at 00414b67
;   FUN_004151e0 at 004151f9
;   FUN_004159c0 at 004159d9
;   FUN_00439f50 at 0043a121
;   FUN_0043c6a0 at 0043c6bf
;   FUN_00454ee0 at 00454eff
;   FUN_0045ab40 at 0045abc5
;   FUN_004632c0 at 004632d9
;   FUN_00495a20 at 00496396
;   ... and 36 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0051d380
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
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

