; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_hero_cpp_FUN_004cfd60(CHero *param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_hero.cpp_FUN_004d0780 at 004d0805
;
; Referenced Globals:
;   undefined4 DAT_005d9d74
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfd60
        ;   Label: core_hero.cpp_FUN_004cfd60
    PUSH ESI                            ; 004cfd61
    PUSH EDI                            ; 004cfd62
    PUSH EBP                            ; 004cfd63
    MOV EBP,ESP                         ; 004cfd64
    SUB ESP,0xc                         ; 004cfd66
    AND ESP,0xfffffff8                  ; 004cfd69
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cfd6c
    MOV EDX,0x7149f2ca                  ; 004cfd6f
    XOR ECX,ECX                         ; 004cfd74
    MOV dword ptr [ESP],EDX             ; 004cfd76
    MOV dword ptr [ESP + 0x8],ECX       ; 004cfd79
    MOV dword ptr [ESP + 0x4],ECX       ; 004cfd7d
    MOV EAX,[0x0061b5a8]                ; 004cfd81 | g_CDemonSetPtr
        ;   Label: LAB_004cfd81
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cfd86
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004cfd8a | g_CDemonSetInstance.actor_count
    JGE 0x004cfe67                      ; 004cfd90
        ;   XREF to: 004cfe67 (CONDITIONAL_JUMP)  ; LAB_004cfe67
    ADD EAX,dword ptr [ESP + 0x4]       ; 004cfd96
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004cfd9a | g_CDemonSetInstance.actors[0]
    FLD float ptr [EBX + 0x20]          ; 004cfda0
    FSUB float ptr [ESI + 0x20]         ; 004cfda3
    FABS                                ; 004cfda6
    FCOMP double ptr [0x005d9d74]       ; 004cfda8 | DAT_005d9d74
    FNSTSW AX                           ; 004cfdae
    SAHF                                ; 004cfdb0
    JBE 0x004cfdc9                      ; 004cfdb1
        ;   XREF to: 004cfdc9 (CONDITIONAL_JUMP)  ; LAB_004cfdc9
    MOV EDI,dword ptr [ESP + 0x8]       ; 004cfdb3
        ;   Label: LAB_004cfdb3
    MOV EBX,dword ptr [ESP + 0x4]       ; 004cfdb7
    INC EDI                             ; 004cfdbb
    ADD EBX,0x4                         ; 004cfdbc
    MOV dword ptr [ESP + 0x8],EDI       ; 004cfdbf
    MOV dword ptr [ESP + 0x4],EBX       ; 004cfdc3
    JMP 0x004cfd81                      ; 004cfdc7
        ;   XREF to: 004cfd81 (UNCONDITIONAL_JUMP)  ; LAB_004cfd81
    FLD float ptr [EBX + 0x24]          ; 004cfdc9
        ;   Label: LAB_004cfdc9
    FSUB float ptr [ESI + 0x24]         ; 004cfdcc
    FABS                                ; 004cfdcf
    FCOMP double ptr [0x005d9d74]       ; 004cfdd1 | DAT_005d9d74
    FNSTSW AX                           ; 004cfdd7
    SAHF                                ; 004cfdd9
    JA 0x004cfdb3                       ; 004cfdda
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    FLD float ptr [EBX + 0x28]          ; 004cfddc
    FSUB float ptr [ESI + 0x28]         ; 004cfddf
    FABS                                ; 004cfde2
    FCOMP double ptr [0x005d9d74]       ; 004cfde4 | DAT_005d9d74
    FNSTSW AX                           ; 004cfdea
    SAHF                                ; 004cfdec
    JA 0x004cfdb3                       ; 004cfded
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    CMP EBX,ESI                         ; 004cfdef
    JZ 0x004cfdb3                       ; 004cfdf1
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    PUSH EBX                            ; 004cfdf3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cfdf4
    CALL dword ptr [EAX + 0x9c]         ; 004cfdfa
    ADD ESP,0x4                         ; 004cfe00
    TEST EAX,EAX                        ; 004cfe03
    JNZ 0x004cfdb3                      ; 004cfe05
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    PUSH ESI                            ; 004cfe07
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cfe08
    PUSH EBX                            ; 004cfe0e
    CALL dword ptr [EAX + 0x8c]         ; 004cfe0f
    MOV EDI,EAX                         ; 004cfe15
    ADD ESP,0x8                         ; 004cfe17
    TEST EAX,EAX                        ; 004cfe1a
    JZ 0x004cfdb3                       ; 004cfe1c
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    MOV ECX,dword ptr [EBP + 0x18]      ; 004cfe1e
    PUSH ECX                            ; 004cfe21
    PUSH EBX                            ; 004cfe22
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004cfe23
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004cfe28
    TEST EAX,EAX                        ; 004cfe2b
    JZ 0x004cfdb3                       ; 004cfe2d
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    MOV EAX,ESP                         ; 004cfe2f
    PUSH EAX                            ; 004cfe31
    PUSH EDI                            ; 004cfe32
    PUSH EBX                            ; 004cfe33
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 004cfe34
    PUSH ESI                            ; 004cfe3a
    CALL dword ptr [EDX + 0x160]        ; 004cfe3b
    ADD ESP,0x10                        ; 004cfe41
    TEST EAX,EAX                        ; 004cfe44
    JZ 0x004cfdb3                       ; 004cfe46
        ;   XREF to: 004cfdb3 (CONDITIONAL_JUMP)  ; LAB_004cfdb3
    MOV dword ptr [ESI + 0x255f0],0x4   ; 004cfe4c
    MOV dword ptr [ESI + 0x255f4],EBX   ; 004cfe56
    MOV dword ptr [ESI + 0x255f8],EBX   ; 004cfe5c
    JMP 0x004cfdb3                      ; 004cfe62
        ;   XREF to: 004cfdb3 (UNCONDITIONAL_JUMP)  ; LAB_004cfdb3
    CMP dword ptr [ESI + 0x255f0],0x4   ; 004cfe67
        ;   Label: LAB_004cfe67
    SETZ AL                             ; 004cfe6e
    AND EAX,0xff                        ; 004cfe71
    MOV ESP,EBP                         ; 004cfe76
    POP EBP                             ; 004cfe78
    POP EDI                             ; 004cfe79
    POP ESI                             ; 004cfe7a
    POP EBX                             ; 004cfe7b
    RET                                 ; 004cfe7c

