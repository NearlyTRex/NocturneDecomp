; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_free_FUN_004eefb0(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_ground.cpp_CGround_dtor_FUN_004eeee0 at 004eeee6
;   core_ground.cpp_CGround_init_FUN_004eef00 at 004eef06
;   core_terrain.cpp_CTerrain_free_FUN_005e1f30 at 005e1f37
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_0062e71f
;   TerminatedCString s_core_ground_cpp_0062e732
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eefb0
        ;   Label: core_ground.cpp_CGround_free_FUN_004eefb0
    PUSH ESI                            ; 004eefb1
    PUSH EDI                            ; 004eefb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eefb3
    MOV EDX,dword ptr [EBX + 0x24]      ; 004eefb7
    TEST EDX,EDX                        ; 004eefba
    JNZ 0x004eefe6                      ; 004eefbc
        ;   XREF to: 004eefe6 (CONDITIONAL_JUMP)  ; LAB_004eefe6
    MOV EDI,0xeb                        ; 004eefbe
        ;   Label: LAB_004eefbe
    MOV ESI,0x62e732                    ; 004eefc3 | = "..\\core\\ground.cpp"
    MOV EAX,dword ptr [EBX + 0x28]      ; 004eefc8
    MOV dword ptr [0x02f0d944],EDI      ; 004eefcb | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ESI      ; 004eefd1 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 004eefd7
    JNZ 0x004ef002                      ; 004eefd9
        ;   XREF to: 004ef002 (CONDITIONAL_JUMP)  ; LAB_004ef002
    MOV dword ptr [EBX + 0x28],0x0      ; 004eefdb
    POP EDI                             ; 004eefe2
    POP ESI                             ; 004eefe3
    POP EBX                             ; 004eefe4
    RET                                 ; 004eefe5
    PUSH 0xe7                           ; 004eefe6
        ;   Label: LAB_004eefe6
    PUSH 0x62e71f                       ; 004eefeb | = "..\\core\\ground.cpp"
    PUSH EDX                            ; 004eeff0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004eeff1
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004eeff6
    MOV dword ptr [EBX + 0x24],0x0      ; 004eeff9
    JMP 0x004eefbe                      ; 004ef000
        ;   XREF to: 004eefbe (UNCONDITIONAL_JUMP)  ; LAB_004eefbe
    PUSH 0x0                            ; 004ef002
        ;   Label: LAB_004ef002
    PUSH EAX                            ; 004ef004
    CALL core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0 ; 004ef005
        ;   XREF to: 005dbdf0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0(CTextureList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ef00a
    PUSH EAX                            ; 004ef00d
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004ef00e
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004ef013
    MOV dword ptr [EBX + 0x28],0x0      ; 004ef016
    POP EDI                             ; 004ef01d
    POP ESI                             ; 004ef01e
    POP EBX                             ; 004ef01f
    RET                                 ; 004ef020

