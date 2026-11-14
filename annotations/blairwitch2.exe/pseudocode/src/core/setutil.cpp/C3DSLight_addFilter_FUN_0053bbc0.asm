; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_0053bbc0(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
; float            Stack[0xc]:4   duration
; int              Stack[0x10]:4   filter_mode
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00523f6b
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e6462
;   TerminatedCString s_C3DSLight_addFilter_too_005e6476
;   CFilterCache* g_CFilterCachePtr = 015111a8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bbc0
        ;   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_0053bbc0
    PUSH ESI                            ; 0053bbc1
    PUSH EDI                            ; 0053bbc2
    PUSH EBP                            ; 0053bbc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053bbc4
    CMP dword ptr [EBX + 0x11ec],0x20   ; 0053bbc8
    JGE 0x0053bc7a                      ; 0053bbcf
        ;   XREF to: 0053bc7a (CONDITIONAL_JUMP)  ; LAB_0053bc7a
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0053bbd5
        ;   Label: LAB_0053bbd5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053bbdb
    ADD EAX,EDX                         ; 0053bbe2
    LEA ECX,[EBX + 0x11f4]              ; 0053bbe4
    SHL EAX,0x3                         ; 0053bbea
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053bbed
    LEA EDI,[ECX + EAX*0x1]             ; 0053bbf1
    PUSH EDI                            ; 0053bbf4
    MOV AL,byte ptr [ESI]               ; 0053bbf5
        ;   Label: LAB_0053bbf5
    MOV byte ptr [EDI],AL               ; 0053bbf7
    CMP AL,0x0                          ; 0053bbf9
    JZ 0x0053bc0d                       ; 0053bbfb
        ;   XREF to: 0053bc0d (CONDITIONAL_JUMP)  ; LAB_0053bc0d
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bbfd
    ADD ESI,0x2                         ; 0053bc00
    MOV byte ptr [EDI + 0x1],AL         ; 0053bc03
    ADD EDI,0x2                         ; 0053bc06
    CMP AL,0x0                          ; 0053bc09
    JNZ 0x0053bbf5                      ; 0053bc0b
        ;   XREF to: 0053bbf5 (CONDITIONAL_JUMP)  ; LAB_0053bbf5
    POP EDI                             ; 0053bc0d
        ;   Label: LAB_0053bc0d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0053bc0e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053bc14
    MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX ; 0053bc18
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0053bc1f
    MOV EDX,dword ptr [ESP + 0x20]      ; 0053bc25
    MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX ; 0053bc29
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0053bc30
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053bc36
    ADD EAX,EDX                         ; 0053bc3d
    MOV EDI,dword ptr [EBX + 0x11f0]    ; 0053bc3f
    SHL EAX,0x3                         ; 0053bc45
    PUSH EDI                            ; 0053bc48
    ADD ECX,EAX                         ; 0053bc49
    PUSH ECX                            ; 0053bc4b
    MOV EBP,dword ptr [0x0060a0b4]      ; 0053bc4c | g_CFilterCachePtr
    PUSH EBP                            ; 0053bc52
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660 ; 0053bc53
        ;   XREF to: 00447660 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00447660(CFilterCache * this_ptr, char * filter_name, int blend_filter)
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 0053bc58
    MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX ; 0053bc5e
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0053bc65
    INC EAX                             ; 0053bc6b
    ADD ESP,0xc                         ; 0053bc6c
    MOV dword ptr [EBX + 0x11ec],EAX    ; 0053bc6f
    POP EBP                             ; 0053bc75
    POP EDI                             ; 0053bc76
    POP ESI                             ; 0053bc77
    POP EBX                             ; 0053bc78
    RET                                 ; 0053bc79
    PUSH 0x20                           ; 0053bc7a
        ;   Label: LAB_0053bc7a
    MOV ECX,0x5e6462                    ; 0053bc7c | = "..\\core\\setutil.cpp"
    MOV ESI,0x3b6                       ; 0053bc81
    PUSH 0x5e6476                       ; 0053bc86 | = "C3DSLight::addFilter - too many filte..."
    MOV dword ptr [0x01d046a0],ECX      ; 0053bc8b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0053bc91 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053bc97
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0053bc9c
    JMP 0x0053bbd5                      ; 0053bc9f
        ;   XREF to: 0053bbd5 (UNCONDITIONAL_JUMP)  ; LAB_0053bbd5

