; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_004df040(int param_1)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0 at 004cf8ef
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f8
;   undefined4 DAT_01c038fc
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fb1d0c
;   undefined4 DAT_01fb1d10
;   undefined4 DAT_01fb1d14
;   undefined4 DAT_01fb1d18
;   undefined4 DAT_01fb1d1c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;   engine_matrix.c_normalizeVector3DFloat_FUN_004cde90
;   wincore_windll.cpp_clearScreen_FUN_0052ee70
;   wincore_windll.cpp_clearZBufferNative_FUN_0052eed4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df040
        ;   Label: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040
    PUSH ESI                            ; 004df041
    PUSH EDI                            ; 004df042
    PUSH EBP                            ; 004df043
    SUB ESP,0x24                        ; 004df044
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004df047
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_windll.cpp_clearZBufferNative_FUN_0052eed4 ; 004df04c
        ;   XREF to: 0052eed4 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearZBufferNative_FUN_0052eed4()
    PUSH 0x2dd1184                      ; 004df051 | DAT_02dd1184
    MOV EDX,dword ptr [0x005ae704]      ; 004df056 | DAT_005ae704
    PUSH EDX                            ; 004df05c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 004df05d
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 004df062
    MOV ECX,dword ptr [0x005ae704]      ; 004df065 | DAT_005ae704
    PUSH 0x42600000                     ; 004df06b
    PUSH ECX                            ; 004df070 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004df071
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00()
    ADD ESP,0x8                         ; 004df076
    PUSH 0x2dd1184                      ; 004df079 | DAT_02dd1184
    MOV EBX,dword ptr [0x005ae704]      ; 004df07e | DAT_005ae704
    PUSH EBX                            ; 004df084 | DAT_01b4d738
    MOV EBP,0x42100000                  ; 004df085
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 004df08a
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780()
    ADD ESP,0x8                         ; 004df08f
    LEA EAX,[ESP + 0x18]                ; 004df092
    XOR ESI,ESI                         ; 004df096
    PUSH EAX                            ; 004df098
    MOV EAX,[0x005ae704]                ; 004df099 | DAT_005ae704
    MOV dword ptr [ESP + 0x1c],ESI      ; 004df09e
    PUSH EAX                            ; 004df0a2 | DAT_01b4d738
    MOV dword ptr [ESP + 0x24],ESI      ; 004df0a3
    MOV dword ptr [ESP + 0x28],EBP      ; 004df0a7
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004df0ab
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    MOV EAX,[0x005be368]                ; 004df0b0 | DAT_005be368
    MOV dword ptr [EAX + 0x15aa88],0x1  ; 004df0b5 | DAT_01fb1d0c
    MOV EAX,[0x01c038f8]                ; 004df0bf | DAT_01c038f8
    ADD ESP,0x8                         ; 004df0c4
    ADD EAX,0xffff8000                  ; 004df0c7
    MOV dword ptr [ESP + 0xc],EAX       ; 004df0cc
    MOV EAX,[0x01c038fc]                ; 004df0d0 | DAT_01c038fc
    ADD EAX,0xffff8000                  ; 004df0d5
    LEA EDI,[ESP + 0xc]                 ; 004df0da
    MOV dword ptr [ESP + 0x10],EAX      ; 004df0de
    LEA EAX,[ESP + 0xc]                 ; 004df0e2
    MOV EDX,0x8000                      ; 004df0e6
    PUSH EAX                            ; 004df0eb
    LEA ESI,[ESP + 0x4]                 ; 004df0ec
    MOV dword ptr [ESP + 0x18],EDX      ; 004df0f0
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_004cde90 ; 004df0f4
        ;   XREF to: 004cde90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_004cde90()
    LEA ESI,[ESP + 0x4]                 ; 004df0f9
    ADD ESP,0x4                         ; 004df0fd
    MOVSD ES:EDI,ESI                    ; 004df100
    MOVSD ES:EDI,ESI                    ; 004df101
    MOVSD ES:EDI,ESI                    ; 004df102
    MOV EDX,dword ptr [0x005be368]      ; 004df103 | DAT_005be368
    MOV EAX,dword ptr [ESP + 0xc]       ; 004df109
    MOV dword ptr [EDX + 0x15aa8c],EAX  ; 004df10d | DAT_01fb1d10
    MOV EAX,dword ptr [ESP + 0x10]      ; 004df113
    MOV dword ptr [EDX + 0x15aa90],EAX  ; 004df117 | DAT_01fb1d14
    PUSH 0x205                          ; 004df11d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004df122
    PUSH 0x0                            ; 004df126
    MOV dword ptr [EDX + 0x15aa94],EAX  ; 004df128 | DAT_01fb1d18
    MOV EAX,dword ptr [ESP + 0x40]      ; 004df12e
    PUSH 0x0                            ; 004df132
    ADD EAX,0x8                         ; 004df134
    PUSH EAX                            ; 004df137
    MOV dword ptr [EDX + 0x15aa98],0x280 ; 004df138 | DAT_01fb1d1c
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004df142
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    MOV EAX,[0x005be368]                ; 004df147 | DAT_005be368 | DAT_01e57284
    ADD ESP,0x10                        ; 004df14c
    MOV dword ptr [EAX + 0x15aa88],0x0  ; 004df14f | DAT_01fb1d0c
    ADD ESP,0x24                        ; 004df159
    POP EBP                             ; 004df15c
    POP EDI                             ; 004df15d
    POP ESI                             ; 004df15e
    POP EBX                             ; 004df15f
    RET                                 ; 004df160

