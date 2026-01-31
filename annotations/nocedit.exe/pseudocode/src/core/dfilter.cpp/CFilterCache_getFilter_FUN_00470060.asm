; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_getFilter_FUN_00470060 (CFilterCache *this_ptr,char *filter_name,char *filter_filename,int enable_init)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
; char *           Stack[0xc]:4   filter_filename
; int              Stack[0x10]:4   enable_init
;
; XREF[3]:
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 0050658c
;   core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0 at 00587033
;   core_setutil.cpp_C3DSLight_create_FUN_00586a90 at 00586b73
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_0061e4b2
;   TerminatedCString s_CFilterCache_getFilter_T_0061e4c6
;   TerminatedCString s_core_dfilter_cpp_0061e4f1
;   TerminatedCString s_core_dfilter_cpp_0061e505
;   TerminatedCString s_CFilterCache_getFilter_O_0061e519
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
;   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
;   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470060
        ;   Label: core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
    PUSH ESI                            ; 00470061
    PUSH EBP                            ; 00470062
    MOV EBP,dword ptr [ESP + 0x10]      ; 00470063
    MOV EDX,dword ptr [EBP]             ; 00470067
    XOR EBX,EBX                         ; 0047006a
    TEST EDX,EDX                        ; 0047006c
    JLE 0x00470094                      ; 0047006e
        ;   XREF to: 00470094 (CONDITIONAL_JUMP)  ; LAB_00470094
    LEA ESI,[EBP + 0x4]                 ; 00470070
    MOV EAX,dword ptr [ESP + 0x14]      ; 00470073
        ;   Label: LAB_00470073
    PUSH EAX                            ; 00470077
    PUSH ESI                            ; 00470078
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00470079
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047007e
    TEST EAX,EAX                        ; 00470081
    JZ 0x0047016e                       ; 00470083
        ;   XREF to: 0047016e (CONDITIONAL_JUMP)  ; LAB_0047016e
    INC EBX                             ; 00470089
    MOV ECX,dword ptr [EBP]             ; 0047008a
    ADD ESI,0x28                        ; 0047008d
    CMP EBX,ECX                         ; 00470090
    JL 0x00470073                       ; 00470092
        ;   XREF to: 00470073 (CONDITIONAL_JUMP)  ; LAB_00470073
    PUSH EDI                            ; 00470094
        ;   Label: LAB_00470094
    CMP dword ptr [EBP],0x40            ; 00470095
    JGE 0x00470179                      ; 00470099
        ;   XREF to: 00470179 (CONDITIONAL_JUMP)  ; LAB_00470179
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047009f
        ;   Label: LAB_0047009f
    LEA EAX,[EBX*0x4 + 0x0]             ; 004700a3
    LEA EDI,[EBP + 0x4]                 ; 004700aa
    ADD EAX,EBX                         ; 004700ad
    MOV EDX,dword ptr [EBP]             ; 004700af
    SHL EAX,0x3                         ; 004700b2
    INC EDX                             ; 004700b5
    ADD EDI,EAX                         ; 004700b6
    MOV dword ptr [EBP],EDX             ; 004700b8
    PUSH EDI                            ; 004700bb
    MOV AL,byte ptr [ESI]               ; 004700bc
        ;   Label: LAB_004700bc
    MOV byte ptr [EDI],AL               ; 004700be
    CMP AL,0x0                          ; 004700c0
    JZ 0x004700d4                       ; 004700c2
        ;   XREF to: 004700d4 (CONDITIONAL_JUMP)  ; LAB_004700d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004700c4
    ADD ESI,0x2                         ; 004700c7
    MOV byte ptr [EDI + 0x1],AL         ; 004700ca
    ADD EDI,0x2                         ; 004700cd
    CMP AL,0x0                          ; 004700d0
    JNZ 0x004700bc                      ; 004700d2
        ;   XREF to: 004700bc (CONDITIONAL_JUMP)  ; LAB_004700bc
    POP EDI                             ; 004700d4
        ;   Label: LAB_004700d4
    PUSH 0x58                           ; 004700d5
    PUSH 0x61e4f1                       ; 004700d7 | = "..\\core\\dfilter.cpp"
    PUSH 0x4c                           ; 004700dc
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004700de
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004700e3
    TEST EAX,EAX                        ; 004700e6
    JZ 0x004700f3                       ; 004700e8
        ;   XREF to: 004700f3 (CONDITIONAL_JUMP)  ; LAB_004700f3
    PUSH EAX                            ; 004700ea
    CALL core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0 ; 004700eb
        ;   XREF to: 004701f0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter * this_ptr)
    ADD ESP,0x4                         ; 004700f0
    MOV ESI,EAX                         ; 004700f3
        ;   Label: LAB_004700f3
    MOV dword ptr [EBP + EBX*0x4 + 0xa04],ESI ; 004700f5
    TEST ESI,ESI                        ; 004700fc
    JNZ 0x00470123                      ; 004700fe
        ;   XREF to: 00470123 (CONDITIONAL_JUMP)  ; LAB_00470123
    MOV ESI,0x61e505                    ; 00470100 | = "..\\core\\dfilter.cpp"
    MOV EDI,0x59                        ; 00470105
    PUSH 0x61e519                       ; 0047010a | = "CFilterCache::getFilter - Out of memory"
    MOV dword ptr [0x02f0ca48],ESI      ; 0047010f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00470115 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047011b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470120
    LEA ESI,[EBX*0x4 + 0x0]             ; 00470123
        ;   Label: LAB_00470123
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047012a
    ADD ESI,EBP                         ; 0047012e
    PUSH EAX                            ; 00470130
    MOV EDX,dword ptr [ESI + 0xa04]     ; 00470131
    PUSH EDX                            ; 00470137
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 ; 00470138
        ;   XREF to: 004702f0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0047013d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00470140
    JZ 0x0047015d                       ; 00470145
        ;   XREF to: 0047015d (CONDITIONAL_JUMP)  ; LAB_0047015d
    PUSH 0x1                            ; 00470147
    MOV EDI,dword ptr [ESI + 0xa04]     ; 00470149
    PUSH 0x3faa9fbe                     ; 0047014f
    PUSH EDI                            ; 00470154
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0 ; 00470155
        ;   XREF to: 004705a0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 0047015a
    SHL EBX,0x2                         ; 0047015d
        ;   Label: LAB_0047015d
    LEA EAX,[EBX + EBP*0x1]             ; 00470160
    MOV EAX,dword ptr [EAX + 0xa04]     ; 00470163
    POP EDI                             ; 00470169
    POP EBP                             ; 0047016a
    POP ESI                             ; 0047016b
    POP EBX                             ; 0047016c
    RET                                 ; 0047016d
    MOV EAX,dword ptr [EBP + EBX*0x4 + 0xa04] ; 0047016e
        ;   Label: LAB_0047016e
    POP EBP                             ; 00470175
    POP ESI                             ; 00470176
    POP EBX                             ; 00470177
    RET                                 ; 00470178
    MOV EDI,0x61e4b2                    ; 00470179 | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_00470179
    MOV EAX,0x55                        ; 0047017e
    PUSH 0x61e4c6                       ; 00470183 | = "CFilterCache::getFilter - Too many fi..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00470188 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0047018e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470193
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470198
    JMP 0x0047009f                      ; 0047019b
        ;   XREF to: 0047009f (UNCONDITIONAL_JUMP)  ; LAB_0047009f

