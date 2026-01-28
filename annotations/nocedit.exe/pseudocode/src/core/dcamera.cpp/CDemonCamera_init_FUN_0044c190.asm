; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera *this_ptr,int screen_height)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_height
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 at 0044c111
;   core_game.cpp_CGame_setGameRes_FUN_004dade0 at 004dae7d
;   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0 at 0056b7ea
;   core_setedit.cpp_UserInputCreate_FUN_0057d660 at 0057d9a2
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_00619eda
;   TerminatedCString s_core_dcamera_cpp_00619eee
;   TerminatedCString s_CDemonCamera_init_Unable_00619f02
;   TerminatedCString s_core_dcamera_cpp_00619f34
;   TerminatedCString s_core_dcamera_cpp_00619f48
;   TerminatedCString s_CDemonCamera_init_Unable_00619f5c
;   int g_CameraDownscaleIterations
;   int g_CameraScreenWidth
;   int g_CameraScreenHeight
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c190
        ;   Label: core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
    PUSH ESI                            ; 0044c191
    PUSH EBP                            ; 0044c192
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044c193
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044c197
    PUSH EBX                            ; 0044c19b
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360 ; 0044c19c
        ;   XREF to: 0044c360 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera * this_ptr)
    LEA EDX,[ESI*0x4 + 0x0]             ; 0044c1a1
    MOV ECX,0x3                         ; 0044c1a8
    MOV EAX,EDX                         ; 0044c1ad
    SAR EDX,0x1f                        ; 0044c1af
    IDIV ECX                            ; 0044c1b2
    ADD ESP,0x4                         ; 0044c1b4
    MOV dword ptr [0x0151a3a8],ESI      ; 0044c1b7 | g_CameraScreenHeight
    MOV [0x0151a3a4],EAX                ; 0044c1bd | g_CameraScreenWidth
    CMP ESI,0x1e0                       ; 0044c1c2
    JLE 0x0044c1cf                      ; 0044c1c8
        ;   XREF to: 0044c1cf (CONDITIONAL_JUMP)  ; LAB_0044c1cf
    MOV ESI,0x1e0                       ; 0044c1ca
    MOV dword ptr [EBX + 0x148],ESI     ; 0044c1cf
        ;   Label: LAB_0044c1cf
    LEA EDX,[ESI*0x4 + 0x0]             ; 0044c1d5
    MOV ECX,0x3                         ; 0044c1dc
    MOV EAX,EDX                         ; 0044c1e1
    SAR EDX,0x1f                        ; 0044c1e3
    IDIV ECX                            ; 0044c1e6
    MOV dword ptr [EBX + 0x14c],0x1     ; 0044c1e8
    MOV dword ptr [EBX + 0x144],EAX     ; 0044c1f2
    MOV EAX,dword ptr [EBX + 0x144]     ; 0044c1f8
    XOR EDX,EDX                         ; 0044c1fe
    MOV dword ptr [EBX + 0x150],EAX     ; 0044c200
    MOV dword ptr [0x013bc260],EDX      ; 0044c206 | g_CameraDownscaleIterations
    MOV EAX,dword ptr [EBX + 0x148]     ; 0044c20c
    MOV ECX,dword ptr [EBX + 0x150]     ; 0044c212
    MOV dword ptr [EBX + 0x154],EAX     ; 0044c218
    CMP ECX,0x140                       ; 0044c21e
    JLE 0x0044c27c                      ; 0044c224
        ;   XREF to: 0044c27c (CONDITIONAL_JUMP)  ; LAB_0044c27c
    PUSH EDI                            ; 0044c226
    MOV ECX,0x2                         ; 0044c227
    MOV EAX,dword ptr [EBX + 0x150]     ; 0044c22c
        ;   Label: LAB_0044c22c
    MOV EDX,EAX                         ; 0044c232
    SAR EDX,0x1f                        ; 0044c234
    IDIV ECX                            ; 0044c237
    MOV dword ptr [EBX + 0x150],EAX     ; 0044c239
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044c23f
    MOV EDX,EAX                         ; 0044c245
    SAR EDX,0x1f                        ; 0044c247
    IDIV ECX                            ; 0044c24a
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0044c24c
    MOV EDI,dword ptr [0x013bc260]      ; 0044c252 | g_CameraDownscaleIterations
    ADD ESI,ESI                         ; 0044c258
    INC EDI                             ; 0044c25a
    MOV dword ptr [EBX + 0x14c],ESI     ; 0044c25b
    MOV dword ptr [0x013bc260],EDI      ; 0044c261 | g_CameraDownscaleIterations
    MOV EBP,dword ptr [EBX + 0x150]     ; 0044c267
    MOV dword ptr [EBX + 0x154],EAX     ; 0044c26d
    CMP EBP,0x140                       ; 0044c273
    JG 0x0044c22c                       ; 0044c279
        ;   XREF to: 0044c22c (CONDITIONAL_JUMP)  ; LAB_0044c22c
    POP EDI                             ; 0044c27b
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044c27c
        ;   Label: LAB_0044c27c
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0044c282
    PUSH 0x240                          ; 0044c289
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044c28e
    PUSH 0x619eda                       ; 0044c295 | = "..\\core\\dcamera.cpp"
    ADD EAX,0x1010                      ; 0044c29a
    PUSH EAX                            ; 0044c29f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0044c2a0
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0044c2a5
    MOV dword ptr [EBX + 0x160],EAX     ; 0044c2a8
    TEST EAX,EAX                        ; 0044c2ae
    JNZ 0x0044c2d5                      ; 0044c2b0
        ;   XREF to: 0044c2d5 (CONDITIONAL_JUMP)  ; LAB_0044c2d5
    MOV ECX,0x619eee                    ; 0044c2b2 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x241                       ; 0044c2b7
    PUSH 0x619f02                       ; 0044c2bc | = "CDemonCamera::init - Unable to alloc ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0044c2c1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0044c2c7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044c2cd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044c2d2
    MOV EDX,dword ptr [EBX + 0x144]     ; 0044c2d5
        ;   Label: LAB_0044c2d5
    IMUL EDX,dword ptr [EBX + 0x148]    ; 0044c2db
    PUSH 0x245                          ; 0044c2e2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044c2e7
    PUSH 0x619f34                       ; 0044c2ee | = "..\\core\\dcamera.cpp"
    ADD EAX,0x1010                      ; 0044c2f3
    PUSH EAX                            ; 0044c2f8
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0044c2f9
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0044c2fe
    MOV dword ptr [EBX + 0x164],EAX     ; 0044c301
    TEST EAX,EAX                        ; 0044c307
    JZ 0x0044c331                       ; 0044c309
        ;   XREF to: 0044c331 (CONDITIONAL_JUMP)  ; LAB_0044c331
    MOV EAX,dword ptr [EBX + 0x160]     ; 0044c30b
        ;   Label: LAB_0044c30b
    ADD EAX,0x10                        ; 0044c311
    AND AL,0xf0                         ; 0044c314
    MOV dword ptr [EBX + 0x158],EAX     ; 0044c316
    MOV EAX,dword ptr [EBX + 0x164]     ; 0044c31c
    ADD EAX,0x10                        ; 0044c322
    AND AL,0xf0                         ; 0044c325
    MOV dword ptr [EBX + 0x15c],EAX     ; 0044c327
    POP EBP                             ; 0044c32d
    POP ESI                             ; 0044c32e
    POP EBX                             ; 0044c32f
    RET                                 ; 0044c330
    MOV EAX,0x619f48                    ; 0044c331 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044c331
    MOV EDX,0x246                       ; 0044c336
    PUSH 0x619f5c                       ; 0044c33b | = "CDemonCamera::init - Unable to alloc ..."
    MOV [0x02f0ca48],EAX                ; 0044c340 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0044c345 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044c34b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0044c350
    JMP 0x0044c30b                      ; 0044c353
        ;   XREF to: 0044c30b (UNCONDITIONAL_JUMP)  ; LAB_0044c30b

