; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00542e50(C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
; float            Stack[0xc]:4   duration
; int              Stack[0x10]:4   filter_mode
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b507
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d10db
;   TerminatedCString s_C3DSLight_addFilter_too_005d10ef
;   CFilterCache* g_CFilterCachePtr = 01548f90
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00459710
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542e50
        ;   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_00542e50
    PUSH ESI                            ; 00542e51
    PUSH EDI                            ; 00542e52
    PUSH EBP                            ; 00542e53
    MOV EBX,dword ptr [ESP + 0x14]      ; 00542e54
    CMP dword ptr [EBX + 0x11ec],0x20   ; 00542e58
    JGE 0x00542f0a                      ; 00542e5f
        ;   XREF to: 00542f0a (CONDITIONAL_JUMP)  ; LAB_00542f0a
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00542e65
        ;   Label: LAB_00542e65
    LEA EAX,[EDX*0x4 + 0x0]             ; 00542e6b
    ADD EAX,EDX                         ; 00542e72
    LEA ECX,[EBX + 0x11f4]              ; 00542e74
    SHL EAX,0x3                         ; 00542e7a
    MOV ESI,dword ptr [ESP + 0x18]      ; 00542e7d
    LEA EDI,[ECX + EAX*0x1]             ; 00542e81
    PUSH EDI                            ; 00542e84
    MOV AL,byte ptr [ESI]               ; 00542e85
        ;   Label: LAB_00542e85
    MOV byte ptr [EDI],AL               ; 00542e87
    CMP AL,0x0                          ; 00542e89
    JZ 0x00542e9d                       ; 00542e8b
        ;   XREF to: 00542e9d (CONDITIONAL_JUMP)  ; LAB_00542e9d
    MOV AL,byte ptr [ESI + 0x1]         ; 00542e8d
    ADD ESI,0x2                         ; 00542e90
    MOV byte ptr [EDI + 0x1],AL         ; 00542e93
    ADD EDI,0x2                         ; 00542e96
    CMP AL,0x0                          ; 00542e99
    JNZ 0x00542e85                      ; 00542e9b
        ;   XREF to: 00542e85 (CONDITIONAL_JUMP)  ; LAB_00542e85
    POP EDI                             ; 00542e9d
        ;   Label: LAB_00542e9d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00542e9e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00542ea4
    MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX ; 00542ea8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00542eaf
    MOV EDX,dword ptr [ESP + 0x20]      ; 00542eb5
    MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX ; 00542eb9
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00542ec0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00542ec6
    ADD EAX,EDX                         ; 00542ecd
    MOV EDI,dword ptr [EBX + 0x11f0]    ; 00542ecf
    SHL EAX,0x3                         ; 00542ed5
    PUSH EDI                            ; 00542ed8
    ADD ECX,EAX                         ; 00542ed9
    PUSH ECX                            ; 00542edb
    MOV EBP,dword ptr [0x005f190c]      ; 00542edc | g_CFilterCachePtr
    PUSH EBP                            ; 00542ee2
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00459710 ; 00542ee3
        ;   XREF to: 00459710 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00459710(CFilterCache * this_ptr, char * filter_name, int blend_filter)
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00542ee8
    MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX ; 00542eee
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00542ef5
    INC EAX                             ; 00542efb
    ADD ESP,0xc                         ; 00542efc
    MOV dword ptr [EBX + 0x11ec],EAX    ; 00542eff
    POP EBP                             ; 00542f05
    POP EDI                             ; 00542f06
    POP ESI                             ; 00542f07
    POP EBX                             ; 00542f08
    RET                                 ; 00542f09
    PUSH 0x20                           ; 00542f0a
        ;   Label: LAB_00542f0a
    MOV ECX,0x5d10db                    ; 00542f0c | = "..\\core\\setutil.cpp"
    MOV ESI,0x3b6                       ; 00542f11
    PUSH 0x5d10ef                       ; 00542f16 | = "C3DSLight::addFilter - too many filte..."
    MOV dword ptr [0x01d71de0],ECX      ; 00542f1b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00542f21 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00542f27
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00542f2c
    JMP 0x00542e65                      ; 00542f2f
        ;   XREF to: 00542e65 (UNCONDITIONAL_JUMP)  ; LAB_00542e65

