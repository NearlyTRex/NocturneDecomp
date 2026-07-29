; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0043d960(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_curtain.cpp_FUN_0043d930 at 0043d943
;
; Referenced Globals:
;   TerminatedCString s_SGLASS_RAW_0057b4c7
;   undefined4 s_SGLASS_RAW_0057b4c7+1
;   undefined4 s_SGLASS_RAW_0057b4c7+2
;   undefined4 s_SGLASS_RAW_0057b4c7+3
;   TerminatedCString s_none_0057b4d2
;   undefined4 s_one_0057b4d2+1
;   undefined4 s_ne_0057b4d2+2
;   undefined4 s_e_0057b4d2+3
;   CDemonActor_vtable g_CCurtainVTable
;   WatcomTypeInfo g_SCurtainVertexTypeInfo_0059bd90
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0043d960
        ;   Label: core_curtain.cpp_CCurtain_ctor_FUN_0043d960
    PUSH EDI                            ; 0043d961
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043d962
    PUSH EDX                            ; 0043d966
    CALL core_actor.cpp_FUN_00409d30    ; 0043d967
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043d96c
    PUSH 0x59bd90                       ; 0043d96f | g_SCurtainVertexTypeInfo_0059bd90
    PUSH 0x3e8                          ; 0043d974
    ADD EAX,0x200                       ; 0043d979
    PUSH EAX                            ; 0043d97e
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0043d97f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffe00]          ; 0043d984
    MOV dword ptr [EDX + 0x14c],0x59bc94 ; 0043d98a | g_CCurtainVTable
    MOV ESI,0x57b4c7                    ; 0043d994 | = "SGLASS.RAW"
    MOV dword ptr [EDX + 0x150],0x40800000 ; 0043d999
    ADD ESP,0xc                         ; 0043d9a3
    MOV dword ptr [EDX + 0x154],0x40800000 ; 0043d9a6
    LEA EDI,[EDX + 0x164]               ; 0043d9b0
    MOV dword ptr [EDX + 0x158],0x3dcccccd ; 0043d9b6
    PUSH EDI                            ; 0043d9c0
    MOV AL,byte ptr [ESI]               ; 0043d9c1 | = "SGLASS.RAW" | s_SGLASS_RAW_0057b4c7+2
        ;   Label: LAB_0043d9c1
    MOV byte ptr [EDI],AL               ; 0043d9c3
    CMP AL,0x0                          ; 0043d9c5
    JZ 0x0043d9d9                       ; 0043d9c7
        ;   XREF to: 0043d9d9 (CONDITIONAL_JUMP)  ; LAB_0043d9d9
    MOV AL,byte ptr [ESI + 0x1]         ; 0043d9c9 | s_SGLASS_RAW_0057b4c7+1 | s_SGLASS_RAW_0057b4c7+3
    ADD ESI,0x2                         ; 0043d9cc
    MOV byte ptr [EDI + 0x1],AL         ; 0043d9cf
    ADD EDI,0x2                         ; 0043d9d2
    CMP AL,0x0                          ; 0043d9d5
    JNZ 0x0043d9c1                      ; 0043d9d7
        ;   XREF to: 0043d9c1 (CONDITIONAL_JUMP)  ; LAB_0043d9c1
    POP EDI                             ; 0043d9d9
        ;   Label: LAB_0043d9d9
    MOV dword ptr [EDX + 0x160],0x0     ; 0043d9da
    MOV dword ptr [EDX + 0x15c],0xd     ; 0043d9e4
    MOV dword ptr [EDX + 0x174],0x8000  ; 0043d9ee
    MOV dword ptr [EDX + 0x178],0x1     ; 0043d9f8
    MOV dword ptr [EDX + 0x184],0x0     ; 0043da02
    MOV dword ptr [EDX + 0x180],0x0     ; 0043da0c
    MOV ESI,0x57b4d2                    ; 0043da16 | = "none"
    MOV dword ptr [EDX + 0x17c],0x0     ; 0043da1b
    LEA EDI,[EDX + 0x18c]               ; 0043da25
    MOV dword ptr [EDX + 0x188],0x0     ; 0043da2b
    PUSH EDI                            ; 0043da35
    MOV AL,byte ptr [ESI]               ; 0043da36 | = "none" | s_ne_0057b4d2+2
        ;   Label: LAB_0043da36
    MOV byte ptr [EDI],AL               ; 0043da38
    CMP AL,0x0                          ; 0043da3a
    JZ 0x0043da4e                       ; 0043da3c
        ;   XREF to: 0043da4e (CONDITIONAL_JUMP)  ; LAB_0043da4e
    MOV AL,byte ptr [ESI + 0x1]         ; 0043da3e | s_one_0057b4d2+1 | s_e_0057b4d2+3
    ADD ESI,0x2                         ; 0043da41
    MOV byte ptr [EDI + 0x1],AL         ; 0043da44
    ADD EDI,0x2                         ; 0043da47
    CMP AL,0x0                          ; 0043da4a
    JNZ 0x0043da36                      ; 0043da4c
        ;   XREF to: 0043da36 (CONDITIONAL_JUMP)  ; LAB_0043da36
    POP EDI                             ; 0043da4e
        ;   Label: LAB_0043da4e
    MOV dword ptr [EDX + 0x65b0c],0x3f800000 ; 0043da4f
    MOV dword ptr [EDX + 0x65b10],0x3f733333 ; 0043da59
    MOV dword ptr [EDX + 0x65b14],0x0   ; 0043da63
    MOV dword ptr [EDX + 0x65b18],0x3f000000 ; 0043da6d
    MOV dword ptr [EDX + 0x65b1c],0x42000000 ; 0043da77
    MOV dword ptr [EDX + 0x65b24],0x0   ; 0043da81
    MOV dword ptr [EDX + 0x65b28],0x0   ; 0043da8b
    MOV dword ptr [EDX + 0x1f0],0x1     ; 0043da95
    MOV dword ptr [EDX + 0x1f4],0x3f000000 ; 0043da9f
    MOV dword ptr [EDX + 0x1f8],0x1     ; 0043daa9
    MOV EAX,EDX                         ; 0043dab3
    MOV dword ptr [EDX + 0x65b2c],0x0   ; 0043dab5
    POP EDI                             ; 0043dabf
    POP ESI                             ; 0043dac0
    RET                                 ; 0043dac1

