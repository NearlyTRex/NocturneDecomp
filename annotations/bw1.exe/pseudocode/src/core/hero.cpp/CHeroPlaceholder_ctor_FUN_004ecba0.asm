; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * core_hero_cpp_CHeroPlaceholder_ctor_FUN_004ecba0(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004ecb70 at 004ecb83
;   core_mission.cpp_FUN_0051c240 at 0051c323
;
; Referenced Globals:
;   TerminatedCString s_CDoc_005e4b98
;   undefined4 s_Doc_005e4b98+1
;   undefined4 s_oc_005e4b98+2
;   undefined4 s_c_005e4b98+3
;   void* g_CHeroPlaceholderVTable = 00408850
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ecba0
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004ecba0
    PUSH EDI                            ; 004ecba1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ecba2
    PUSH EDX                            ; 004ecba6
    MOV ESI,0x5e4b98                    ; 004ecba7 | = "CDoc"
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004ecbac
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    MOV EDX,EAX                         ; 004ecbb1
    MOV dword ptr [EAX + 0x154],0x601ea4 ; 004ecbb3 | g_CHeroPlaceholderVTable
    ADD ESP,0x4                         ; 004ecbbd
    MOV dword ptr [EAX + 0xfc],0x1      ; 004ecbc0
    LEA EDI,[EAX + 0x15c]               ; 004ecbca
    MOV dword ptr [EAX + 0x158],0x0     ; 004ecbd0
    PUSH EDI                            ; 004ecbda
    MOV AL,byte ptr [ESI]               ; 004ecbdb | = "CDoc" | s_oc_005e4b98+2
        ;   Label: LAB_004ecbdb
    MOV byte ptr [EDI],AL               ; 004ecbdd
    CMP AL,0x0                          ; 004ecbdf
    JZ 0x004ecbf3                       ; 004ecbe1
        ;   XREF to: 004ecbf3 (CONDITIONAL_JUMP)  ; LAB_004ecbf3
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecbe3 | s_Doc_005e4b98+1 | s_c_005e4b98+3
    ADD ESI,0x2                         ; 004ecbe6
    MOV byte ptr [EDI + 0x1],AL         ; 004ecbe9
    ADD EDI,0x2                         ; 004ecbec
    CMP AL,0x0                          ; 004ecbef
    JNZ 0x004ecbdb                      ; 004ecbf1
        ;   XREF to: 004ecbdb (CONDITIONAL_JUMP)  ; LAB_004ecbdb
    POP EDI                             ; 004ecbf3
        ;   Label: LAB_004ecbf3
    MOV EAX,EDX                         ; 004ecbf4
    POP EDI                             ; 004ecbf6
    POP ESI                             ; 004ecbf7
    RET                                 ; 004ecbf8

