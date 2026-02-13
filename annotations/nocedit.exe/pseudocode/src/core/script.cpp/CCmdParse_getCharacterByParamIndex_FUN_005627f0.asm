; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCharacter * __cdecl core_script_cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0(CCmdParse *this_ptr,int param_index)
;
; Parameters:
; CCmdParse *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_index
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_script.cpp_CCmdParse_getMotionListByParamIndex_FUN_00562860 at 0056286a
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563d6d
;
; Referenced Globals:
;   TerminatedCString s_d_00643b8f
;   CDemonActorType g_CCharacterClassInfo
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_script.cpp_getActor_FUN_005594e0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005627f0
        ;   Label: core_script.cpp_CCmdParse_getCharacterByParamIndex_FUN_005627f0
    MOV EAX,ESP                         ; 005627f3
    PUSH EAX                            ; 005627f5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005627f6
    PUSH 0x643b8f                       ; 005627fa | = "%d"
    ADD EAX,0x25c                       ; 005627ff
    MOV EDX,0xffffffff                  ; 00562804
    PUSH EAX                            ; 00562809
    MOV dword ptr [ESP + 0xc],EDX       ; 0056280a
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0056280e
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00562813
    MOV ECX,dword ptr [ESP]             ; 00562816
    TEST ECX,ECX                        ; 00562819
    JL 0x00562829                       ; 0056281b
        ;   XREF to: 00562829 (CONDITIONAL_JUMP)  ; LAB_00562829
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056281d
    CMP ECX,dword ptr [EDX + 0xcc]      ; 00562821
    JL 0x0056282f                       ; 00562827
        ;   XREF to: 0056282f (CONDITIONAL_JUMP)  ; LAB_0056282f
    XOR EAX,EAX                         ; 00562829
        ;   Label: LAB_00562829
    ADD ESP,0x4                         ; 0056282b
    RET                                 ; 0056282e
    PUSH ESI                            ; 0056282f
        ;   Label: LAB_0056282f
    IMUL EAX,ECX,0x328                  ; 00562830
    PUSH 0x823c14                       ; 00562836 | g_CCharacterClassInfo
    ADD EDX,0xd0                        ; 0056283b
    MOV ESI,dword ptr [0x00823c4c]      ; 00562841 | g_CCharacterClassInfo.name_hash
    ADD EAX,EDX                         ; 00562847
    PUSH ESI                            ; 00562849
    ADD EAX,0x64                        ; 0056284a
    PUSH EAX                            ; 0056284d
    CALL core_script.cpp_getActor_FUN_005594e0 ; 0056284e
        ;   XREF to: 005594e0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_script.cpp_getActor_FUN_005594e0(char * actor_specifier, uint expected_class_hash, CDemonActorType * expected_class)
    ADD ESP,0xc                         ; 00562853
    POP ESI                             ; 00562856
    ADD ESP,0x4                         ; 00562857
    RET                                 ; 0056285a

