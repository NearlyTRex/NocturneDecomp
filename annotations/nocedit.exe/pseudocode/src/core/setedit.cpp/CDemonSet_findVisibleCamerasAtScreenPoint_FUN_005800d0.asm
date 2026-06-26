; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0(CDemonSet *this_ptr,int screen_x,int screen_y,int *result_cameras,int exclude_camera_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_x
; int              Stack[0xc]:4   screen_y
; int *            Stack[0x10]:4   result_cameras
; int              Stack[0x14]:4   exclude_camera_index
; Local Variables:
; int[1015]        Stack[-0x1028]:4060  aiStackY_1028
; CVector3i        Stack[-0x40]:12  local_40
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057dff0
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057ab4c
;
; Referenced Globals:
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 g_ScreenHeightForFonts
;   undefined4 g_CDemonCameraInstance.framebuffer_height
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005800d0
        ;   Label: core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
    PUSH ESI                            ; 005800d1
    PUSH EDI                            ; 005800d2
    PUSH EBP                            ; 005800d3
    SUB ESP,0x30                        ; 005800d4
    MOV EBP,dword ptr [ESP + 0x44]      ; 005800d7
    MOV EBX,dword ptr [ESP + 0x48]      ; 005800db
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005800df
    CMP EBX,0x1                         ; 005800e3
    JL 0x00580101                       ; 005800e6
        ;   XREF to: 00580101 (CONDITIONAL_JUMP)  ; LAB_00580101
    CMP ESI,0x1                         ; 005800e8
    JL 0x00580101                       ; 005800eb
        ;   XREF to: 00580101 (CONDITIONAL_JUMP)  ; LAB_00580101
    MOV EAX,[0x03275a28]                ; 005800ed | g_ScreenHeightForFonts
    DEC EAX                             ; 005800f2
    CMP EBX,EAX                         ; 005800f3
    JG 0x00580101                       ; 005800f5
        ;   XREF to: 00580101 (CONDITIONAL_JUMP)  ; LAB_00580101
    MOV EAX,[0x03275a2c]                ; 005800f7 | g_CDemonCameraInstance.framebuffer_height
    DEC EAX                             ; 005800fc
    CMP ESI,EAX                         ; 005800fd
    JLE 0x0058010b                      ; 005800ff
        ;   XREF to: 0058010b (CONDITIONAL_JUMP)  ; LAB_0058010b
    XOR EAX,EAX                         ; 00580101
        ;   Label: LAB_00580101
    ADD ESP,0x30                        ; 00580103
    POP EBP                             ; 00580106
    POP EDI                             ; 00580107
    POP ESI                             ; 00580108
    POP EBX                             ; 00580109
    RET                                 ; 0058010a
    PUSH ESI                            ; 0058010b
        ;   Label: LAB_0058010b
    PUSH EBX                            ; 0058010c
    PUSH 0x32758e4                      ; 0058010d | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x24]                ; 00580112
    LEA EDI,[ESP + 0x30]                ; 00580116
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0058011a
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x24]                ; 0058011f
    ADD ESP,0xc                         ; 00580123
    JMP 0x0060c6b0                      ; 00580126
        ;   XREF to: 0060c6b0 (UNCONDITIONAL_JUMP)  ; LAB_0060c6b0
    JG 0x00580101                       ; 00580131
        ;   XREF to: 00580101 (CONDITIONAL_JUMP)  ; LAB_00580101
        ;   Label: LAB_00580131
    LEA EAX,[ESP + 0x24]                ; 00580133
    PUSH EAX                            ; 00580137
    PUSH 0x32758e4                      ; 00580138 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x8]                 ; 0058013d
    LEA EDI,[ESP + 0x14]                ; 00580141
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 00580145
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8]                 ; 0058014a
    ADD ESP,0x8                         ; 0058014e
    JMP 0x0060c6d3                      ; 00580151
        ;   XREF to: 0060c6d3 (UNCONDITIONAL_JUMP)  ; LAB_0060c6d3
    MOV ECX,dword ptr [EBP]             ; 00580156
        ;   Label: LAB_00580156
    XOR EDI,EDI                         ; 00580159
    TEST ECX,ECX                        ; 0058015b
    JLE 0x0058016f                      ; 0058015d
        ;   XREF to: 0058016f (CONDITIONAL_JUMP)  ; LAB_0058016f
    MOV ESI,dword ptr [ESP + 0x50]      ; 0058015f
    CMP EBX,dword ptr [ESP + 0x54]      ; 00580163
        ;   Label: LAB_00580163
    JNZ 0x00580179                      ; 00580167
        ;   XREF to: 00580179 (CONDITIONAL_JUMP)  ; LAB_00580179
    INC EBX                             ; 00580169
        ;   Label: LAB_00580169
    CMP EBX,dword ptr [EBP]             ; 0058016a
    JL 0x00580163                       ; 0058016d
        ;   XREF to: 00580163 (CONDITIONAL_JUMP)  ; LAB_00580163
    MOV EAX,EDI                         ; 0058016f
        ;   Label: LAB_0058016f
    ADD ESP,0x30                        ; 00580171
    POP EBP                             ; 00580174
    POP EDI                             ; 00580175
    POP ESI                             ; 00580176
    POP EBX                             ; 00580177
    RET                                 ; 00580178
    PUSH EBX                            ; 00580179
        ;   Label: LAB_00580179
    LEA EAX,[ESP + 0x10]                ; 0058017a
    PUSH EAX                            ; 0058017e
    PUSH EBP                            ; 0058017f
    CALL core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0 ; 00580180
        ;   XREF to: 005801b0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0(CDemonSet * this_ptr, CVector3i * point, int camera_index)
    ADD ESP,0xc                         ; 00580185
    TEST EAX,EAX                        ; 00580188
    JZ 0x00580169                       ; 0058018a
        ;   XREF to: 00580169 (CONDITIONAL_JUMP)  ; LAB_00580169
    ADD ESI,0x4                         ; 0058018c
    INC EDI                             ; 0058018f
    MOV dword ptr [ESI + -0x4],EBX      ; 00580190
    INC EBX                             ; 00580193
    CMP EBX,dword ptr [EBP]             ; 00580194
    JL 0x00580163                       ; 00580197
        ;   XREF to: 00580163 (CONDITIONAL_JUMP)  ; LAB_00580163
    MOV EAX,EDI                         ; 00580199
    ADD ESP,0x30                        ; 0058019b
    POP EBP                             ; 0058019e
    POP EDI                             ; 0058019f
    POP ESI                             ; 005801a0
    POP EBX                             ; 005801a1
    RET                                 ; 005801a2
    MOV ECX,dword ptr [ESI]             ; 0060c6b0
        ;   Label: LAB_0060c6b0
    MOV dword ptr [EDI],ECX             ; 0060c6b2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c6b4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c6b7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c6ba
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c6bd
    ADD ESI,0xc                         ; 0060c6c0
    ADD EDI,0xc                         ; 0060c6c3
    CMP dword ptr [ESP + 0x2c],0x3fffffff ; 0060c6c6
    JMP 0x00580131                      ; 0060c6ce
        ;   XREF to: 00580131 (UNCONDITIONAL_JUMP)  ; LAB_00580131
    MOV ECX,dword ptr [ESI]             ; 0060c6d3
        ;   Label: LAB_0060c6d3
    MOV dword ptr [EDI],ECX             ; 0060c6d5
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c6d7
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c6da
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c6dd
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c6e0
    ADD ESI,0xc                         ; 0060c6e3
    ADD EDI,0xc                         ; 0060c6e6
    XOR EBX,EBX                         ; 0060c6e9
    JMP 0x00580156                      ; 0060c6eb
        ;   XREF to: 00580156 (UNCONDITIONAL_JUMP)  ; LAB_00580156

