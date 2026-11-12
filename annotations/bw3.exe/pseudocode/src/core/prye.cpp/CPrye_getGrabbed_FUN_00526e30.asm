; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_prye_cpp_CPrye_getGrabbed_FUN_00526e30(CPrye *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; Referenced Globals:
;   undefined4 s_CPrye_startGettingGrabbe_005cd9a9+2
;   TerminatedCString s_current_motion_is_s_005cd9d6
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_007e1a50
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_hero.cpp_CHero_getGrabbed_FUN_004d2af0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526e30
        ;   Label: core_prye.cpp_CPrye_getGrabbed_FUN_00526e30
    PUSH ESI                            ; 00526e31
    PUSH EDI                            ; 00526e32
    PUSH EBP                            ; 00526e33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00526e34
    MOV ESI,dword ptr [ESP + 0x18]      ; 00526e38
    TEST ESI,ESI                        ; 00526e3c
    JNZ 0x00526e47                      ; 00526e3e
        ;   XREF to: 00526e47 (CONDITIONAL_JUMP)  ; LAB_00526e47
    XOR EAX,EAX                         ; 00526e40
        ;   Label: LAB_00526e40
    POP EBP                             ; 00526e42
        ;   Label: LAB_00526e42
    POP EDI                             ; 00526e43
    POP ESI                             ; 00526e44
    POP EBX                             ; 00526e45
    RET                                 ; 00526e46
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00526e47
        ;   Label: LAB_00526e47
    PUSH EDX                            ; 00526e4b
    PUSH ESI                            ; 00526e4c
    PUSH 0x5cd9ab                       ; 00526e4d | s_CPrye_startGettingGrabbe_005cd9a9+2
    MOV ECX,dword ptr [0x005f1690]      ; 00526e52 | g_CConsolePtr
    PUSH ECX                            ; 00526e58 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00526e59
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00526e5e
    LEA EAX,[EBX + 0x158]               ; 00526e61
    PUSH EAX                            ; 00526e67
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00526e68
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00526e6d
    PUSH EAX                            ; 00526e70
    PUSH 0x5cd9d6                       ; 00526e71 | = "  current motion is %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00526e76 | g_CConsolePtr
    PUSH EDI                            ; 00526e7c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00526e7d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EBP,dword ptr [EBX + 0x20b98]   ; 00526e82
    ADD ESP,0xc                         ; 00526e88
    TEST EBP,EBP                        ; 00526e8b
    JNZ 0x00526e40                      ; 00526e8d
        ;   XREF to: 00526e40 (CONDITIONAL_JUMP)  ; LAB_00526e40
    MOV EAX,dword ptr [EBX + 0x20b94]   ; 00526e8f
    TEST EAX,EAX                        ; 00526e95
    JNZ 0x00526e40                      ; 00526e97
        ;   XREF to: 00526e40 (CONDITIONAL_JUMP)  ; LAB_00526e40
    CMP dword ptr [EBX + 0x20ba0],0x0   ; 00526e99
    JNZ 0x00526e42                      ; 00526ea0
        ;   XREF to: 00526e42 (CONDITIONAL_JUMP)  ; LAB_00526e42
    MOV ECX,dword ptr [EBX + 0x20b64]   ; 00526ea2
    TEST ECX,ECX                        ; 00526ea8
    JZ 0x00526ece                       ; 00526eaa
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0x3                         ; 00526eac
    JZ 0x00526ece                       ; 00526eaf
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0x7                         ; 00526eb1
    JZ 0x00526ece                       ; 00526eb4
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0xa                         ; 00526eb6
    JZ 0x00526ece                       ; 00526eb9
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0xb                         ; 00526ebb
    JZ 0x00526ece                       ; 00526ebe
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0xc                         ; 00526ec0
    JZ 0x00526ece                       ; 00526ec3
        ;   XREF to: 00526ece (CONDITIONAL_JUMP)  ; LAB_00526ece
    CMP ECX,0xd                         ; 00526ec5
    JNZ 0x00526e42                      ; 00526ec8
        ;   XREF to: 00526e42 (CONDITIONAL_JUMP)  ; LAB_00526e42
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00526ece
        ;   Label: LAB_00526ece
    PUSH EBP                            ; 00526ed2
    PUSH ESI                            ; 00526ed3
    PUSH EBX                            ; 00526ed4
    CALL core_hero.cpp_CHero_getGrabbed_FUN_004d2af0 ; 00526ed5
        ;   XREF to: 004d2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_getGrabbed_FUN_004d2af0(CHero * this_ptr, CDemonActor * grabber, int grab_type)
    ADD ESP,0xc                         ; 00526eda
    MOV ESI,EAX                         ; 00526edd
    TEST EAX,EAX                        ; 00526edf
    JZ 0x00526f33                       ; 00526ee1
        ;   XREF to: 00526f33 (CONDITIONAL_JUMP)  ; LAB_00526f33
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00526ee3
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 00526ee9
    CMP EAX,EDX                         ; 00526eef
    JZ 0x00526f07                       ; 00526ef1
        ;   XREF to: 00526f07 (CONDITIONAL_JUMP)  ; LAB_00526f07
    MOV ECX,dword ptr [0x007e1a50]      ; 00526ef3 | DAT_007e1a50
    PUSH ECX                            ; 00526ef9
    PUSH EAX                            ; 00526efa
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00526efb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00526f00
    TEST EAX,EAX                        ; 00526f03
    JZ 0x00526f3a                       ; 00526f05
        ;   XREF to: 00526f3a (CONDITIONAL_JUMP)  ; LAB_00526f3a
    MOV EBP,dword ptr [EBX + 0x20c24]   ; 00526f07
        ;   Label: LAB_00526f07
    CMP EBP,dword ptr [EBX + 0x2628]    ; 00526f0d
    JZ 0x00526f29                       ; 00526f13
        ;   XREF to: 00526f29 (CONDITIONAL_JUMP)  ; LAB_00526f29
    PUSH 0x0                            ; 00526f15
    PUSH 0x1                            ; 00526f17
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526f19
    PUSH EBX                            ; 00526f1f
    CALL dword ptr [EAX + 0x128]        ; 00526f20
    ADD ESP,0xc                         ; 00526f26
    MOV dword ptr [EBX + 0x20cc8],0x0   ; 00526f29
        ;   Label: LAB_00526f29
    MOV EAX,ESI                         ; 00526f33
        ;   Label: LAB_00526f33
    POP EBP                             ; 00526f35
    POP EDI                             ; 00526f36
    POP ESI                             ; 00526f37
    POP EBX                             ; 00526f38
    RET                                 ; 00526f39
    PUSH 0x0                            ; 00526f3a
        ;   Label: LAB_00526f3a
    PUSH 0x0                            ; 00526f3c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526f3e
    PUSH EBX                            ; 00526f44
    CALL dword ptr [EAX + 0x128]        ; 00526f45
    ADD ESP,0xc                         ; 00526f4b
    JMP 0x00526f07                      ; 00526f4e
        ;   XREF to: 00526f07 (UNCONDITIONAL_JUMP)  ; LAB_00526f07

