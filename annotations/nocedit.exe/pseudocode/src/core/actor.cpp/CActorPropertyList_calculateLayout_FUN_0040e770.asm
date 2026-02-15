; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770(CActorPropertyList *this_ptr,int x,int y,int width)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c5a1
;
; Referenced Globals:
;   TerminatedCString s_anon_006144b9
;   TerminatedCString s_anon_006144bc
;
; Called Functions:
;   core_actor.cpp_CActorProperty_getNameWidth_FUN_0040ee30
;   core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e770
        ;   Label: core_actor.cpp_CActorPropertyList_calculateLayout_FUN_0040e770
    PUSH ESI                            ; 0040e771
    PUSH EDI                            ; 0040e772
    PUSH EBP                            ; 0040e773
    SUB ESP,0x4                         ; 0040e774
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040e777
    MOV ECX,dword ptr [EDI + 0x4]       ; 0040e77b
    XOR EBP,EBP                         ; 0040e77e
    XOR ESI,ESI                         ; 0040e780
    MOV dword ptr [ESP],EBP             ; 0040e782
    TEST ECX,ECX                        ; 0040e785
    JLE 0x0040e7bd                      ; 0040e787
        ;   XREF to: 0040e7bd (CONDITIONAL_JUMP)  ; LAB_0040e7bd
    LEA EBX,[EDI + 0x8]                 ; 0040e789
    PUSH EBX                            ; 0040e78c
        ;   Label: LAB_0040e78c
    CALL core_actor.cpp_CActorProperty_getNameWidth_FUN_0040ee30 ; 0040e78d
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorProperty_getNameWidth_FUN_0040ee30(CActorProperty * this_ptr)
    ADD ESP,0x4                         ; 0040e792
    CMP EAX,EBP                         ; 0040e795
    JLE 0x0040e79b                      ; 0040e797
        ;   XREF to: 0040e79b (CONDITIONAL_JUMP)  ; LAB_0040e79b
    MOV EBP,EAX                         ; 0040e799
    MOV EDX,dword ptr [EDI]             ; 0040e79b
        ;   Label: LAB_0040e79b
    PUSH EDX                            ; 0040e79d
    PUSH EBX                            ; 0040e79e
    CALL core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50 ; 0040e79f
        ;   XREF to: 0040ee50 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50(CActorProperty * this_ptr, int index)
    ADD ESP,0x8                         ; 0040e7a4
    CMP EAX,dword ptr [ESP]             ; 0040e7a7
    JLE 0x0040e7af                      ; 0040e7aa
        ;   XREF to: 0040e7af (CONDITIONAL_JUMP)  ; LAB_0040e7af
    MOV dword ptr [ESP],EAX             ; 0040e7ac
    INC ESI                             ; 0040e7af
        ;   Label: LAB_0040e7af
    MOV EAX,dword ptr [EDI + 0x4]       ; 0040e7b0
    ADD EBX,0xec                        ; 0040e7b3
    CMP ESI,EAX                         ; 0040e7b9
    JL 0x0040e78c                       ; 0040e7bb
        ;   XREF to: 0040e78c (CONDITIONAL_JUMP)  ; LAB_0040e78c
    PUSH 0x6144b9                       ; 0040e7bd | = ": "
        ;   Label: LAB_0040e7bd
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040e7c2
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 0040e7c7
    ADD EBP,EAX                         ; 0040e7ca
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040e7cc
    ADD EAX,EBP                         ; 0040e7d0
    ADD EAX,0x2                         ; 0040e7d2
    PUSH 0x6144bc                       ; 0040e7d5 | = ": "
    MOV dword ptr [EDI + 0x24f0],EAX    ; 0040e7da
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0040e7e0
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    MOV EBX,EAX                         ; 0040e7e5
    MOV EAX,dword ptr [EDI + 0x24f0]    ; 0040e7e7
    ADD EAX,EBX                         ; 0040e7ed
    ADD ESP,0x4                         ; 0040e7ef
    MOV dword ptr [EDI + 0x24f4],EAX    ; 0040e7f2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040e7f8
    MOV dword ptr [EDI + 0x24f8],EAX    ; 0040e7fc
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040e802
    MOV dword ptr [EDI + 0x24fc],EAX    ; 0040e806
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040e80c
    ADD EAX,0x3                         ; 0040e810
    MOV dword ptr [EDI + 0x2500],EAX    ; 0040e813
    MOV EAX,dword ptr [ESP]             ; 0040e819
    ADD EAX,EBP                         ; 0040e81c
    MOV dword ptr [EDI + 0x24e8],EAX    ; 0040e81e
    MOV EAX,dword ptr [EDI + 0x4]       ; 0040e824
    ADD EAX,EAX                         ; 0040e827
    MOV EBX,EAX                         ; 0040e829
    SHL EAX,0x3                         ; 0040e82b
    SUB EAX,EBX                         ; 0040e82e
    ADD EAX,0x6                         ; 0040e830
    MOV dword ptr [EDI + 0x24ec],EAX    ; 0040e833
    ADD ESP,0x4                         ; 0040e839
    POP EBP                             ; 0040e83c
    POP EDI                             ; 0040e83d
    POP ESI                             ; 0040e83e
    POP EBX                             ; 0040e83f
    RET                                 ; 0040e840

