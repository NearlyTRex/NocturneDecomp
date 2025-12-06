; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_melee.cpp_FUN_0050eaf0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050eaf0
        ;   Label: core_melee.cpp_FUN_0050eaf0
    PUSH ESI                            ; 0050eaf1
    SUB ESP,0x4                         ; 0050eaf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050eaf5
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050eaf9
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050eafd
    PUSH EDX                            ; 0050eb01
    PUSH ESI                            ; 0050eb02
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050eb03
    PUSH ECX                            ; 0050eb07
    PUSH EBX                            ; 0050eb08
    CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0 ; 0050eb09 | void core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0(CDemonActor * this_ptr, int attack_flags, SDamageInfo * out_damage_info, CDemonActor * victim)
        ;   XREF to: 0040abc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050eb0e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050eb11
    PUSH EBX                            ; 0050eb17
    CALL dword ptr [EAX + 0x100]        ; 0050eb18
    MOV dword ptr [ESP + 0x4],EAX       ; 0050eb1e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050eb22
    MOV dword ptr [ESI + 0x4],EAX       ; 0050eb26
    MOV EAX,dword ptr [EBX + 0x584]     ; 0050eb29
    MOV dword ptr [ESI + 0x2c],EAX      ; 0050eb2f
    MOV EBX,dword ptr [EBX + 0x59c]     ; 0050eb32
    ADD ESP,0x4                         ; 0050eb38
    MOV dword ptr [ESI + 0x28],EBX      ; 0050eb3b
    ADD ESP,0x4                         ; 0050eb3e
    POP ESI                             ; 0050eb41
    POP EBX                             ; 0050eb42
    RET                                 ; 0050eb43

