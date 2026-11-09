; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005574c0(int min_bytes,int max_bytes)
;
; Parameters:
; int              Stack[0x4]:4   min_bytes
; int              Stack[0x8]:4   max_bytes
;
; Referenced Globals:
;   undefined4 DAT_00604248
;   undefined4 DAT_0060424c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005514c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005574c0
        ;   Label: sound_sndmain.cpp_setMemoryBudget_FUN_005574c0
    MOV [0x00604248],EAX                ; 005574c4 | DAT_00604248
    MOV EAX,dword ptr [ESP + 0x8]       ; 005574c9
    PUSH 0x0                            ; 005574cd
    MOV [0x0060424c],EAX                ; 005574cf | DAT_0060424c
    CALL sound_sndmain.cpp_FUN_005514c0 ; 005574d4
        ;   XREF to: 005514c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005514c0(int requested_bytes)
    ADD ESP,0x4                         ; 005574d9
    RET                                 ; 005574dc

