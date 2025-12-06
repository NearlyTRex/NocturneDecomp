; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00()
;
; Local Variables:
; undefined1       Stack[-0x50]:1  local_50
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057adcc
;   core_setedit.cpp_UserInputCreate_FUN_0057d660 at 0057e188
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_0064851d
;   TerminatedCString s_core_setedit_cpp_00648531
;   TerminatedCString s_Out_of_memory_00648545
;   TerminatedCString s_core_setedit_cpp_00648553
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   char* g_CurrentDebugFilename = 0067d200
;   CDemonRenderer g_CDemonRendererInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 g_ScreenHeightForFonts
;   undefined4 g_CDemonCameraInstance.framebuffer_height
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_memset_FUN_005fde40
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fd00
        ;   Label: core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
    PUSH ESI                            ; 0057fd01
    PUSH EDI                            ; 0057fd02
    PUSH EBP                            ; 0057fd03
    MOV EBP,ESP                         ; 0057fd04
    SUB ESP,0x40                        ; 0057fd06
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057fd09
    PUSH EDX                            ; 0057fd0c
    CALL core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 ; 0057fd0d | undefined core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310()
        ;   XREF to: 00580310 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679394]                ; 0057fd12 | int g_WindowWidth
    IMUL EAX,dword ptr [0x00679398]     ; 0057fd17 | int g_WindowHeight
    ADD ESP,0x4                         ; 0057fd1e
    PUSH EAX                            ; 0057fd21
    PUSH 0x0                            ; 0057fd22
    MOV EBX,dword ptr [EBP + 0x18]      ; 0057fd24
    PUSH EBX                            ; 0057fd27
    CALL crt_memory.c_memset_FUN_005fde40 ; 0057fd28 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x03275a2c]      ; 0057fd2d | g_CDemonCameraInstance.framebuffer_height
    MOV EAX,[0x03275a28]                ; 0057fd33 | g_ScreenHeightForFonts
    IMUL EBX,EAX                        ; 0057fd38
    ADD ESP,0xc                         ; 0057fd3b
    LEA EAX,[EBX*0x4 + 0x0]             ; 0057fd3e
    PUSH 0xf22                          ; 0057fd45
    SUB EAX,EBX                         ; 0057fd4a
    PUSH 0x64851d                       ; 0057fd4c | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_0064851d = ..\core\setedit.cpp
    SHL EAX,0x2                         ; 0057fd51
    PUSH EAX                            ; 0057fd54
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0057fd55 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057fd5a
    MOV dword ptr [EBP + -0x1c],EAX     ; 0057fd5d
    TEST EAX,EAX                        ; 0057fd60
    JZ 0x0057fd90                       ; 0057fd62 | LAB_0057fd90
        ;   XREF to: 0057fd90 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0057fd64
        ;   Label: LAB_0057fd64
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0057fd66
    MOV dword ptr [EBP + -0xc],EAX      ; 0057fd69
    MOV EDX,dword ptr [EBP + -0xc]      ; 0057fd6c
        ;   Label: LAB_0057fd6c
    CMP EDX,dword ptr [0x03275a2c]      ; 0057fd6f | g_CDemonCameraInstance.framebuffer_height
    JGE 0x0057fe11                      ; 0057fd75 | LAB_0057fe11
        ;   XREF to: 0057fe11 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0057fd7b
    MOV dword ptr [EBP + -0x8],ESI      ; 0057fd7d
    MOV EDI,dword ptr [EBP + -0x8]      ; 0057fd80
        ;   Label: LAB_0057fd80
    CMP EDI,dword ptr [0x03275a28]      ; 0057fd83 | g_ScreenHeightForFonts
    JL 0x0057fdb5                       ; 0057fd89 | LAB_0057fdb5
        ;   XREF to: 0057fdb5 (CONDITIONAL_JUMP)
    INC dword ptr [EBP + -0xc]          ; 0057fd8b
    JMP 0x0057fd6c                      ; 0057fd8e | LAB_0057fd6c
        ;   XREF to: 0057fd6c (UNCONDITIONAL_JUMP)
    MOV ESI,0x648531                    ; 0057fd90 | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_00648531 = ..\core\setedit.cpp
        ;   Label: LAB_0057fd90
    MOV EDI,0xf23                       ; 0057fd95
    PUSH 0x648545                       ; 0057fd9a | = "Out of memory" | s_Out_of_memory_00648545 = Out of memory
    MOV dword ptr [0x02f0ca48],ESI      ; 0057fd9f | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0057fda5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057fdab | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057fdb0
    JMP 0x0057fd64                      ; 0057fdb3 | LAB_0057fd64
        ;   XREF to: 0057fd64 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + -0xc]      ; 0057fdb5
        ;   Label: LAB_0057fdb5
    PUSH EDX                            ; 0057fdb8
    PUSH EDI                            ; 0057fdb9
    PUSH 0x32758e4                      ; 0057fdba | CDemonCamera g_CDemonCameraInstance
    LEA ESI,[EBP + -0x28]               ; 0057fdbf
    LEA EDI,[EBP + -0x34]               ; 0057fdc2
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0057fdc5 | void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y)
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
    LEA ESI,[EBP + -0x28]               ; 0057fdca
    MOVSD ES:EDI,ESI                    ; 0057fdcd
    MOVSD ES:EDI,ESI                    ; 0057fdce
    MOVSD ES:EDI,ESI                    ; 0057fdcf
    MOV ESI,dword ptr [EBP + -0x2c]     ; 0057fdd0
    ADD ESP,0xc                         ; 0057fdd3
    CMP ESI,0x3fffffff                  ; 0057fdd6
    JLE 0x0057fde6                      ; 0057fddc | LAB_0057fde6
        ;   XREF to: 0057fde6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x7fffffff      ; 0057fdde
    JMP 0x0057fe02                      ; 0057fde4 | LAB_0057fe02
        ;   XREF to: 0057fe02 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x34]               ; 0057fde6
        ;   Label: LAB_0057fde6
    PUSH EAX                            ; 0057fde9
    PUSH 0x32758e4                      ; 0057fdea | CDemonCamera g_CDemonCameraInstance
    LEA ESI,[EBP + -0x40]               ; 0057fdef
    MOV EDI,EBX                         ; 0057fdf2
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0057fdf4 | CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)
    LEA ESI,[EBP + -0x40]               ; 0057fdf9
    ADD ESP,0x8                         ; 0057fdfc
    MOVSD ES:EDI,ESI                    ; 0057fdff
    MOVSD ES:EDI,ESI                    ; 0057fe00
    MOVSD ES:EDI,ESI                    ; 0057fe01
    MOV EDI,dword ptr [EBP + -0x8]      ; 0057fe02
        ;   Label: LAB_0057fe02
    INC EDI                             ; 0057fe05
    ADD EBX,0xc                         ; 0057fe06
    MOV dword ptr [EBP + -0x8],EDI      ; 0057fe09
    JMP 0x0057fd80                      ; 0057fe0c | LAB_0057fd80
        ;   XREF to: 0057fd80 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057fe11
        ;   Label: LAB_0057fe11
    PUSH 0x32758e4                      ; 0057fe13 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0057fe18 | void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fe1d
    ADD ESP,0x8                         ; 0057fe20
    XOR ECX,ECX                         ; 0057fe23
    MOV EBX,dword ptr [EAX]             ; 0057fe25
    MOV dword ptr [EBP + -0x4],ECX      ; 0057fe27
    TEST EBX,EBX                        ; 0057fe2a
    JLE 0x0057fe89                      ; 0057fe2c | LAB_0057fe89
        ;   XREF to: 0057fe89 (CONDITIONAL_JUMP)
    ADD EAX,0x180                       ; 0057fe2e
    MOV dword ptr [EBP + -0x18],EAX     ; 0057fe33
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fe36
    ADD EAX,0x110                       ; 0057fe39
    MOV dword ptr [EBP + -0x14],EAX     ; 0057fe3e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057fe41
    ADD EAX,0x104                       ; 0057fe44
    MOV dword ptr [EBP + -0x10],EAX     ; 0057fe49
    MOV EAX,dword ptr [EBP + -0x4]      ; 0057fe4c
        ;   Label: LAB_0057fe4c
    CMP EAX,dword ptr [EBP + 0x1c]      ; 0057fe4f
    JNZ 0x0057fec1                      ; 0057fe52 | LAB_0057fec1
        ;   XREF to: 0057fec1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x18]     ; 0057fe54
        ;   Label: LAB_0057fe54
    MOV EDX,dword ptr [EBP + -0x14]     ; 0057fe57
    MOV ECX,dword ptr [EBP + -0x10]     ; 0057fe5a
    MOV EBX,dword ptr [EBP + -0x4]      ; 0057fe5d
    ADD EAX,0x1a4                       ; 0057fe60
    ADD EDX,0x1a4                       ; 0057fe65
    INC EBX                             ; 0057fe6b
    MOV dword ptr [EBP + -0x18],EAX     ; 0057fe6c
    MOV dword ptr [EBP + -0x4],EBX      ; 0057fe6f
    MOV EAX,EBX                         ; 0057fe72
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057fe74
    ADD ECX,0x1a4                       ; 0057fe77
    MOV dword ptr [EBP + -0x14],EDX     ; 0057fe7d
    MOV ESI,dword ptr [EBX]             ; 0057fe80
    MOV dword ptr [EBP + -0x10],ECX     ; 0057fe82
    CMP EAX,ESI                         ; 0057fe85
    JL 0x0057fe4c                       ; 0057fe87 | LAB_0057fe4c
        ;   XREF to: 0057fe4c (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0057fe89
        ;   Label: LAB_0057fe89
    PUSH 0x32758e4                      ; 0057fe8b | CDemonCamera g_CDemonCameraInstance
    MOV EBX,0xf73                       ; 0057fe90
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0057fe95 | void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057fe9a
    MOV ESI,dword ptr [EBP + -0x1c]     ; 0057fe9d
    MOV ECX,0x648553                    ; 0057fea0 | = "..\\core\\setedit.cpp" | s_core_setedit_cpp_00648553 = ..\core\setedit.cpp
    PUSH ESI                            ; 0057fea5
    MOV dword ptr [0x02f0d944],EBX      ; 0057fea6 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0057feac | char * g_CurrentDebugFilename
    CALL crt_memory.c_free_FUN_005fe659 ; 0057feb2 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057feb7
    MOV ESP,EBP                         ; 0057feba
    POP EBP                             ; 0057febc
    POP EDI                             ; 0057febd
    POP ESI                             ; 0057febe
    POP EBX                             ; 0057febf
    RET                                 ; 0057fec0
    MOV EAX,dword ptr [EBP + -0x10]     ; 0057fec1
        ;   Label: LAB_0057fec1
    PUSH EAX                            ; 0057fec4
    MOV EDX,dword ptr [0x006703ec]      ; 0057fec5 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0057fecb | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0057fecc | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057fed1
    PUSH 0x0                            ; 0057fed4
    MOV ECX,dword ptr [EBP + -0x14]     ; 0057fed6
    PUSH ECX                            ; 0057fed9
    MOV EBX,dword ptr [0x006703ec]      ; 0057feda | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 0057fee0 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0057fee1 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057fee6
    MOV ESI,dword ptr [EBP + -0x18]     ; 0057fee9
    PUSH ESI                            ; 0057feec
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0057feed | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057fef2
    MOV EDI,dword ptr [0x006703ec]      ; 0057fef5 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0057fefb | CDemonRenderer g_CDemonRendererInstance
    MOV EBX,EAX                         ; 0057fefc
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0057fefe | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)

