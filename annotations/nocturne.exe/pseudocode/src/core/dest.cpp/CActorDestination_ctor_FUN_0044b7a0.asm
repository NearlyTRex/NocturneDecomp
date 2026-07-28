; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorDestination * __cdecl core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dest.cpp_FUN_0044b770 at 0044b783
;   core_filmreel.cpp_CFilmProjector_ctor_FUN_00481f10 at 00481f18
;
; Referenced Globals:
;   TerminatedCString s_none_0057be09
;   undefined4 s_one_0057be09+1
;   undefined4 s_ne_0057be09+2
;   undefined4 s_e_0057be09+3
;   undefined1* PTR_core_dest.cpp_CActorDestination_setup_FUN_0044b810_0059be64 = 0044b810
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044b7a0
        ;   Label: core_dest.cpp_CActorDestination_ctor_FUN_0044b7a0
    PUSH EDI                            ; 0044b7a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044b7a2
    PUSH EDX                            ; 0044b7a6
    MOV ESI,0x57be09                    ; 0044b7a7 | = "none"
    CALL core_actor.cpp_FUN_00409d30    ; 0044b7ac
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    MOV EDX,EAX                         ; 0044b7b1
    ADD ESP,0x4                         ; 0044b7b3
    LEA EDI,[EAX + 0x180]               ; 0044b7b6
    MOV dword ptr [EAX + 0x14c],0x59be64 ; 0044b7bc | PTR_core_dest.cpp_CActorDestination_setup_FUN_0044b810_0059be64
    PUSH EDI                            ; 0044b7c6
    MOV AL,byte ptr [ESI]               ; 0044b7c7 | = "none" | s_ne_0057be09+2
        ;   Label: LAB_0044b7c7
    MOV byte ptr [EDI],AL               ; 0044b7c9
    CMP AL,0x0                          ; 0044b7cb
    JZ 0x0044b7df                       ; 0044b7cd
        ;   XREF to: 0044b7df (CONDITIONAL_JUMP)  ; LAB_0044b7df
    MOV AL,byte ptr [ESI + 0x1]         ; 0044b7cf | s_one_0057be09+1 | s_e_0057be09+3
    ADD ESI,0x2                         ; 0044b7d2
    MOV byte ptr [EDI + 0x1],AL         ; 0044b7d5
    ADD EDI,0x2                         ; 0044b7d8
    CMP AL,0x0                          ; 0044b7db
    JNZ 0x0044b7c7                      ; 0044b7dd
        ;   XREF to: 0044b7c7 (CONDITIONAL_JUMP)  ; LAB_0044b7c7
    POP EDI                             ; 0044b7df
        ;   Label: LAB_0044b7df
    MOV dword ptr [EDX + 0x150],0x0     ; 0044b7e0
    MOV byte ptr [EDX + 0x154],0x0      ; 0044b7ea
    MOV dword ptr [EDX + 0x1e8],0x1     ; 0044b7f1
    MOV EAX,EDX                         ; 0044b7fb
    MOV dword ptr [EDX + 0x1e4],0x1     ; 0044b7fd
    POP EDI                             ; 0044b807
    POP ESI                             ; 0044b808
    RET                                 ; 0044b809

