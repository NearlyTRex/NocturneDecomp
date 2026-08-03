; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_archive_FUN_004b0e20(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_model_name_00585208
;   TerminatedCString s_fps_00585213
;   TerminatedCString s_active_00585217
;   TerminatedCString s_graveState_0058521e
;   TerminatedCString s_curFrame_00585229
;   TerminatedCString s_hideOnFirstFrame_00585232
;   TerminatedCString s_startCondition_00585243
;   TerminatedCString s_startSound_00585252
;   int INT_005ba8c8 = 0x4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0e20
        ;   Label: core_grave.cpp_CGrave_archive_FUN_004b0e20
    PUSH ESI                            ; 004b0e21
    SUB ESP,0x4                         ; 004b0e22
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0e25
    PUSH EBX                            ; 004b0e29
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004b0e2a
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b0e2f
    PUSH 0x585208                       ; 004b0e32 | = "model name"
    LEA EAX,[EBX + 0x150]               ; 004b0e37
    PUSH EAX                            ; 004b0e3d
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 004b0e3e
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0e43
    PUSH 0x585213                       ; 004b0e46 | = "fps"
    LEA EAX,[EBX + 0x2d0]               ; 004b0e4b
    PUSH EAX                            ; 004b0e51
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b0e52
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005ba8c8]      ; 004b0e57 | INT_005ba8c8
    ADD ESP,0x8                         ; 004b0e5d
    CMP EDX,0x2                         ; 004b0e60
    JL 0x004b0ecf                       ; 004b0e63
        ;   XREF to: 004b0ecf (CONDITIONAL_JUMP)  ; LAB_004b0ecf
    PUSH 0x58521e                       ; 004b0e65 | = "graveState"
    LEA EAX,[EBX + 0x2d8]               ; 004b0e6a
    PUSH EAX                            ; 004b0e70
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b0e71
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0e76
    PUSH 0x585229                       ; 004b0e79 | = "curFrame"
        ;   Label: LAB_004b0e79
    LEA EAX,[EBX + 0x2cc]               ; 004b0e7e
    PUSH EAX                            ; 004b0e84
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004b0e85
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV ESI,dword ptr [0x005ba8c8]      ; 004b0e8a | INT_005ba8c8
    ADD ESP,0x8                         ; 004b0e90
    CMP ESI,0x3                         ; 004b0e93
    JL 0x004b0ec0                       ; 004b0e96
        ;   XREF to: 004b0ec0 (CONDITIONAL_JUMP)  ; LAB_004b0ec0
    PUSH 0x585232                       ; 004b0e98 | = "hideOnFirstFrame"
    LEA EAX,[EBX + 0x2dc]               ; 004b0e9d
    PUSH EAX                            ; 004b0ea3
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b0ea4
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0ea9
    PUSH 0x585243                       ; 004b0eac | = "startCondition"
    LEA EAX,[EBX + 0x2e0]               ; 004b0eb1
    PUSH EAX                            ; 004b0eb7
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b0eb8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b0ebd
    CMP dword ptr [0x005ba8c8],0x4      ; 004b0ec0 | INT_005ba8c8
        ;   Label: LAB_004b0ec0
    JGE 0x004b0f00                      ; 004b0ec7
        ;   XREF to: 004b0f00 (CONDITIONAL_JUMP)  ; LAB_004b0f00
    ADD ESP,0x4                         ; 004b0ec9
    POP ESI                             ; 004b0ecc
    POP EBX                             ; 004b0ecd
    RET                                 ; 004b0ece
    PUSH 0x585217                       ; 004b0ecf | = "active"
        ;   Label: LAB_004b0ecf
    LEA EAX,[ESP + 0x4]                 ; 004b0ed4
    PUSH EAX                            ; 004b0ed8
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b0ed9
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0ede
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004b0ee1
    CMP dword ptr [ESP],0x0             ; 004b0eeb
    JZ 0x004b0e79                       ; 004b0eef
        ;   XREF to: 004b0e79 (CONDITIONAL_JUMP)  ; LAB_004b0e79
    MOV dword ptr [EBX + 0x2d8],0x1     ; 004b0ef1
    JMP 0x004b0e79                      ; 004b0efb
        ;   XREF to: 004b0e79 (UNCONDITIONAL_JUMP)  ; LAB_004b0e79
    PUSH 0x585252                       ; 004b0f00 | = "startSound"
        ;   Label: LAB_004b0f00
    ADD EBX,0x344                       ; 004b0f05
    PUSH EBX                            ; 004b0f0b
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004b0f0c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004b0f11
    ADD ESP,0x4                         ; 004b0f14
    POP ESI                             ; 004b0f17
    POP EBX                             ; 004b0f18
    RET                                 ; 004b0f19

