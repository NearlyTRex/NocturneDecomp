; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl core_setutil_cpp_C3DSLight_create_FUN_0055cf80(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ee92
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f12cd
;   TerminatedCString s_C3DSLight_create_Out_of_005f12e1
;   CFilterCache* g_CFilterCachePtr = 0152c72c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dfilter.cpp_FUN_0045d7c0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dlight.cpp_CDemonLight_ctor_FUN_00462470
;   core_dlight.cpp_CDemonLight_init_FUN_00462590
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055cf80
        ;   Label: core_setutil.cpp_C3DSLight_create_FUN_0055cf80
    PUSH ESI                            ; 0055cf81
    PUSH EDI                            ; 0055cf82
    PUSH EBP                            ; 0055cf83
    SUB ESP,0x4                         ; 0055cf84
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055cf87
    PUSH 0x2fac                         ; 0055cf8b
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0055cf90
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0055cf95
    TEST EAX,EAX                        ; 0055cf98
    JNZ 0x0055d0ae                      ; 0055cf9a
        ;   XREF to: 0055d0ae (CONDITIONAL_JUMP)  ; LAB_0055d0ae
    MOV dword ptr [ESP],EAX             ; 0055cfa0
        ;   Label: LAB_0055cfa0
    TEST EAX,EAX                        ; 0055cfa3
    JNZ 0x0055cfca                      ; 0055cfa5
        ;   XREF to: 0055cfca (CONDITIONAL_JUMP)  ; LAB_0055cfca
    MOV EBX,0x5f12cd                    ; 0055cfa7 | = "..\\core\\setutil.cpp"
    MOV ESI,0x2f9                       ; 0055cfac
    PUSH 0x5f12e1                       ; 0055cfb1 | = "C3DSLight::create - Out of memory!"
    MOV dword ptr [0x01d1d400],EBX      ; 0055cfb6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0055cfbc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055cfc2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055cfc7
    MOV EDI,dword ptr [ESP]             ; 0055cfca
        ;   Label: LAB_0055cfca
    PUSH EDI                            ; 0055cfcd
    CALL core_dlight.cpp_CDemonLight_init_FUN_00462590 ; 0055cfce
        ;   XREF to: 00462590 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_00462590(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0055cfd3
    ADD ESP,0x4                         ; 0055cfd9
    TEST EAX,EAX                        ; 0055cfdc
    JLE 0x0055d0ca                      ; 0055cfde
        ;   XREF to: 0055d0ca (CONDITIONAL_JUMP)  ; LAB_0055d0ca
    MOV EAX,dword ptr [EBP + 0x11f0]    ; 0055cfe4
    MOV dword ptr [EDI + 0x1cb8],EAX    ; 0055cfea
    MOV EBX,dword ptr [ESP]             ; 0055cff0
        ;   Label: LAB_0055cff0
    LEA EAX,[EBP + 0x104]               ; 0055cff3
    ADD EBX,0x4                         ; 0055cff9
    CMP EBX,EAX                         ; 0055cffc
    JZ 0x0055d010                       ; 0055cffe
        ;   XREF to: 0055d010 (CONDITIONAL_JUMP)  ; LAB_0055d010
    MOV EDX,dword ptr [EAX]             ; 0055d000
    MOV dword ptr [EBX],EDX             ; 0055d002
    MOV EDX,dword ptr [EAX + 0x4]       ; 0055d004
    MOV dword ptr [EBX + 0x4],EDX       ; 0055d007
    MOV EDX,dword ptr [EAX + 0x8]       ; 0055d00a
    MOV dword ptr [EBX + 0x8],EDX       ; 0055d00d
    LEA EAX,[EBP + 0x110]               ; 0055d010
        ;   Label: LAB_0055d010
    PUSH EAX                            ; 0055d016
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055d017
    ADD EAX,0x10                        ; 0055d01b
    PUSH EAX                            ; 0055d01e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0055d01f
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0055d024
    MOV EAX,dword ptr [ESP]             ; 0055d027
    MOV EDX,dword ptr [EBP + 0x11c]     ; 0055d02a
    MOV dword ptr [EAX + 0x38],EDX      ; 0055d030
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 0055d033
    XOR ESI,ESI                         ; 0055d039
    TEST EDX,EDX                        ; 0055d03b
    JLE 0x0055d080                      ; 0055d03d
        ;   XREF to: 0055d080 (CONDITIONAL_JUMP)  ; LAB_0055d080
    LEA EDI,[EBP + 0x11f4]              ; 0055d03f
    MOV EBX,EBP                         ; 0055d045
    MOV ECX,dword ptr [EBP + 0x11f0]    ; 0055d047
        ;   Label: LAB_0055d047
    PUSH ECX                            ; 0055d04d
    PUSH EDI                            ; 0055d04e
    MOV EAX,[0x00611358]                ; 0055d04f | g_CFilterCachePtr
    PUSH EAX                            ; 0055d054
    ADD EBX,0x4                         ; 0055d055
    INC ESI                             ; 0055d058
    CALL core_dfilter.cpp_FUN_0045d7c0  ; 0055d059
        ;   XREF to: 0045d7c0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_0045d7c0()
    MOV dword ptr [EBX + 0x180c],EAX    ; 0055d05e
    ADD EDI,0x28                        ; 0055d064
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 0055d067
    ADD ESP,0xc                         ; 0055d06d
    CMP ESI,EDX                         ; 0055d070
    JL 0x0055d047                       ; 0055d072
        ;   XREF to: 0055d047 (CONDITIONAL_JUMP)  ; LAB_0055d047
    LEA EAX,[EAX]                       ; 0055d074
    LEA EDX,[EDX]                       ; 0055d07a
    MOV EDI,dword ptr [ESP]             ; 0055d080
        ;   Label: LAB_0055d080
    LEA ESI,[EBP + 0x4]                 ; 0055d083
    ADD EDI,0x40                        ; 0055d086
    PUSH EDI                            ; 0055d089
    MOV AL,byte ptr [ESI]               ; 0055d08a
        ;   Label: LAB_0055d08a
    MOV byte ptr [EDI],AL               ; 0055d08c
    CMP AL,0x0                          ; 0055d08e
    JZ 0x0055d0a2                       ; 0055d090
        ;   XREF to: 0055d0a2 (CONDITIONAL_JUMP)  ; LAB_0055d0a2
    MOV AL,byte ptr [ESI + 0x1]         ; 0055d092
    ADD ESI,0x2                         ; 0055d095
    MOV byte ptr [EDI + 0x1],AL         ; 0055d098
    ADD EDI,0x2                         ; 0055d09b
    CMP AL,0x0                          ; 0055d09e
    JNZ 0x0055d08a                      ; 0055d0a0
        ;   XREF to: 0055d08a (CONDITIONAL_JUMP)  ; LAB_0055d08a
    POP EDI                             ; 0055d0a2
        ;   Label: LAB_0055d0a2
    MOV EAX,dword ptr [ESP]             ; 0055d0a3
    ADD ESP,0x4                         ; 0055d0a6
    POP EBP                             ; 0055d0a9
    POP EDI                             ; 0055d0aa
    POP ESI                             ; 0055d0ab
    POP EBX                             ; 0055d0ac
    RET                                 ; 0055d0ad
    MOV EDX,dword ptr [EBP + 0x180c]    ; 0055d0ae
        ;   Label: LAB_0055d0ae
    PUSH EDX                            ; 0055d0b4
    MOV ECX,dword ptr [EBP + 0x1808]    ; 0055d0b5
    PUSH ECX                            ; 0055d0bb
    PUSH EAX                            ; 0055d0bc
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_00462470 ; 0055d0bd
        ;   XREF to: 00462470 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_00462470(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 0055d0c2
    JMP 0x0055cfa0                      ; 0055d0c5
        ;   XREF to: 0055cfa0 (UNCONDITIONAL_JUMP)  ; LAB_0055cfa0
    MOV dword ptr [EDI + 0x1cb8],0x1    ; 0055d0ca
        ;   Label: LAB_0055d0ca
    JMP 0x0055cff0                      ; 0055d0d4
        ;   XREF to: 0055cff0 (UNCONDITIONAL_JUMP)  ; LAB_0055cff0

