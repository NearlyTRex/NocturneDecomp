; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_setutil_cpp_C3DSLight_create_FUN_005151f0(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005086f2
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00590e25
;   TerminatedCString s_C3DSLight_create_Out_of_00590e39
;   undefined4 DAT_005ad54c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
;   core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005151f0
        ;   Label: core_setutil.cpp_C3DSLight_create_FUN_005151f0
    PUSH ESI                            ; 005151f1
    PUSH EDI                            ; 005151f2
    PUSH EBP                            ; 005151f3
    SUB ESP,0x4                         ; 005151f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005151f7
    PUSH 0x2fac                         ; 005151fb
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00515200
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00515205
    TEST EAX,EAX                        ; 00515208
    JNZ 0x0051531a                      ; 0051520a
        ;   XREF to: 0051531a (CONDITIONAL_JUMP)  ; LAB_0051531a
    MOV dword ptr [ESP],EAX             ; 00515210
        ;   Label: LAB_00515210
    TEST EAX,EAX                        ; 00515213
    JNZ 0x0051523a                      ; 00515215
        ;   XREF to: 0051523a (CONDITIONAL_JUMP)  ; LAB_0051523a
    MOV EBX,0x590e25                    ; 00515217 | = "..\\core\\setutil.cpp"
    MOV ESI,0x2c6                       ; 0051521c
    PUSH 0x590e39                       ; 00515221 | = "C3DSLight::create - Out of memory!"
    MOV dword ptr [0x01cc4800],EBX      ; 00515226 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0051522c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00515232
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00515237
    MOV EDI,dword ptr [ESP]             ; 0051523a
        ;   Label: LAB_0051523a
    PUSH EDI                            ; 0051523d
    CALL core_dlight.cpp_CDemonLight_init_FUN_0044e1e0 ; 0051523e
        ;   XREF to: 0044e1e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_0044e1e0(CDemonLight * this_ptr)
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 00515243
    ADD ESP,0x4                         ; 00515249
    TEST EAX,EAX                        ; 0051524c
    JLE 0x00515336                      ; 0051524e
        ;   XREF to: 00515336 (CONDITIONAL_JUMP)  ; LAB_00515336
    MOV EAX,dword ptr [EBP + 0x11f0]    ; 00515254
    MOV dword ptr [EDI + 0x1cb8],EAX    ; 0051525a
    MOV EBX,dword ptr [ESP]             ; 00515260
        ;   Label: LAB_00515260
    LEA EAX,[EBP + 0x104]               ; 00515263
    ADD EBX,0x104                       ; 00515269
    CMP EBX,EAX                         ; 0051526f
    JZ 0x00515283                       ; 00515271
        ;   XREF to: 00515283 (CONDITIONAL_JUMP)  ; LAB_00515283
    MOV EDX,dword ptr [EAX]             ; 00515273
    MOV dword ptr [EBX],EDX             ; 00515275
    MOV EDX,dword ptr [EAX + 0x4]       ; 00515277
    MOV dword ptr [EBX + 0x4],EDX       ; 0051527a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051527d
    MOV dword ptr [EBX + 0x8],EDX       ; 00515280
    LEA EAX,[EBP + 0x110]               ; 00515283
        ;   Label: LAB_00515283
    PUSH EAX                            ; 00515289
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051528a
    ADD EAX,0x110                       ; 0051528e
    PUSH EAX                            ; 00515293
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00515294
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00515299
    MOV EAX,dword ptr [ESP]             ; 0051529c
    MOV EDX,dword ptr [EBP + 0x11c]     ; 0051529f
    MOV dword ptr [EAX + 0x138],EDX     ; 005152a5
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 005152ab
    XOR ESI,ESI                         ; 005152b1
    TEST EDX,EDX                        ; 005152b3
    JLE 0x005152f0                      ; 005152b5
        ;   XREF to: 005152f0 (CONDITIONAL_JUMP)  ; LAB_005152f0
    LEA EBX,[EBP + 0x11f4]              ; 005152b7
    MOV EDI,EBP                         ; 005152bd
    MOV ECX,dword ptr [EBP + 0x11f0]    ; 005152bf
        ;   Label: LAB_005152bf
    PUSH ECX                            ; 005152c5
    PUSH EBX                            ; 005152c6
    MOV EAX,[0x005ad54c]                ; 005152c7 | DAT_005ad54c
    PUSH EAX                            ; 005152cc
    ADD EDI,0x4                         ; 005152cd
    INC ESI                             ; 005152d0
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 ; 005152d1
        ;   XREF to: 0044bd20 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20(CFilterCache * this_ptr, char * filter_name, int blend_filter)
    MOV dword ptr [EDI + 0x180c],EAX    ; 005152d6
    ADD EBX,0x28                        ; 005152dc
    MOV EDX,dword ptr [EBP + 0x11ec]    ; 005152df
    ADD ESP,0xc                         ; 005152e5
    CMP ESI,EDX                         ; 005152e8
    JL 0x005152bf                       ; 005152ea
        ;   XREF to: 005152bf (CONDITIONAL_JUMP)  ; LAB_005152bf
    LEA EAX,[EAX]                       ; 005152ec
    MOV EDI,dword ptr [ESP]             ; 005152f0
        ;   Label: LAB_005152f0
    LEA ESI,[EBP + 0x4]                 ; 005152f3
    PUSH EDI                            ; 005152f6
    MOV AL,byte ptr [ESI]               ; 005152f7
        ;   Label: LAB_005152f7
    MOV byte ptr [EDI],AL               ; 005152f9
    CMP AL,0x0                          ; 005152fb
    JZ 0x0051530f                       ; 005152fd
        ;   XREF to: 0051530f (CONDITIONAL_JUMP)  ; LAB_0051530f
    MOV AL,byte ptr [ESI + 0x1]         ; 005152ff
    ADD ESI,0x2                         ; 00515302
    MOV byte ptr [EDI + 0x1],AL         ; 00515305
    ADD EDI,0x2                         ; 00515308
    CMP AL,0x0                          ; 0051530b
    JNZ 0x005152f7                      ; 0051530d
        ;   XREF to: 005152f7 (CONDITIONAL_JUMP)  ; LAB_005152f7
    POP EDI                             ; 0051530f
        ;   Label: LAB_0051530f
    MOV EAX,EDI                         ; 00515310
    ADD ESP,0x4                         ; 00515312
    POP EBP                             ; 00515315
    POP EDI                             ; 00515316
    POP ESI                             ; 00515317
    POP EBX                             ; 00515318
    RET                                 ; 00515319
    MOV EDX,dword ptr [EBP + 0x180c]    ; 0051531a
        ;   Label: LAB_0051531a
    PUSH EDX                            ; 00515320
    MOV ECX,dword ptr [EBP + 0x1808]    ; 00515321
    PUSH ECX                            ; 00515327
    PUSH EAX                            ; 00515328
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0044e110 ; 00515329
        ;   XREF to: 0044e110 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_0044e110(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    ADD ESP,0xc                         ; 0051532e
    JMP 0x00515210                      ; 00515331
        ;   XREF to: 00515210 (UNCONDITIONAL_JUMP)  ; LAB_00515210
    MOV dword ptr [EDI + 0x1cb8],0x1    ; 00515336
        ;   Label: LAB_00515336
    JMP 0x00515260                      ; 00515340
        ;   XREF to: 00515260 (UNCONDITIONAL_JUMP)  ; LAB_00515260

