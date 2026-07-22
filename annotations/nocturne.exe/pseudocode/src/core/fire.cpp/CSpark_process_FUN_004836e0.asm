; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CSpark_process_FUN_004836e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_005810cc = 0.0000152587890625
;   undefined4 DAT_005b9354
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c77850
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004a5f00
;   core_particle.cpp_CParticle_process_FUN_004ef120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004836e0
        ;   Label: core_fire.cpp_CSpark_process_FUN_004836e0
    PUSH EDI                            ; 004836e1
    PUSH EBP                            ; 004836e2
    SUB ESP,0x8                         ; 004836e3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004836e6
    CMP dword ptr [EBX + 0x40],0x0      ; 004836ea
    JNZ 0x00483759                      ; 004836ee
        ;   XREF to: 00483759 (CONDITIONAL_JUMP)  ; LAB_00483759
    MOV dword ptr [EBX + 0x40],0x1      ; 004836f0
    MOV EAX,[0x005b9354]                ; 004836f7 | DAT_005b9354
        ;   Label: LAB_004836f7
    MOV EAX,dword ptr [EAX + 0x264]     ; 004836fc | DAT_01c77850
    MOV EDX,dword ptr [0x01bd1d80]      ; 00483702 | DAT_01bd1d80
    MOV dword ptr [ESP],EAX             ; 00483708
    MOV EAX,dword ptr [EBX + 0x48]      ; 0048370b
    IMUL EDX                            ; 0048370e
    SHRD EAX,EDX,0x10                   ; 00483710
    MOV dword ptr [ESP + 0x4],EAX       ; 00483714
    FILD dword ptr [ESP + 0x4]          ; 00483718
    FMUL double ptr [0x005810cc]        ; 0048371c | DOUBLE_005810cc
    SUB ESP,0x4                         ; 00483722
    MOV EDI,dword ptr [0x005b9354]      ; 00483725 | DAT_005b9354
    FSTP float ptr [ESP]                ; 0048372b
    PUSH EDI                            ; 0048372e | DAT_01c775ec
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 0048372f
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_slamDT_FUN_004a5f00()
    ADD ESP,0x8                         ; 00483734
    PUSH EBX                            ; 00483737
    CALL core_particle.cpp_CParticle_process_FUN_004ef120 ; 00483738
        ;   XREF to: 004ef120 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_process_FUN_004ef120()
    ADD ESP,0x4                         ; 0048373d
    MOV EBP,dword ptr [0x005b9354]      ; 00483740 | DAT_005b9354
    PUSH dword ptr [ESP]                ; 00483746
    PUSH EBP                            ; 00483749 | DAT_01c775ec
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 0048374a
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_slamDT_FUN_004a5f00()
    ADD ESP,0x8                         ; 0048374f
    ADD ESP,0x8                         ; 00483752
    POP EBP                             ; 00483755
    POP EDI                             ; 00483756
    POP EBX                             ; 00483757
    RET                                 ; 00483758
    MOV EAX,[0x01bd1d80]                ; 00483759 | DAT_01bd1d80
        ;   Label: LAB_00483759
    MOV EDX,dword ptr [EBX + 0x48]      ; 0048375e
    MOV ECX,dword ptr [EBX + 0x3c]      ; 00483761
    IMUL EDX                            ; 00483764
    SHRD EAX,EDX,0x10                   ; 00483766
    MOV EDX,EAX                         ; 0048376a
    MOV EAX,ECX                         ; 0048376c
    IMUL EDX                            ; 0048376e
    SHRD EAX,EDX,0x10                   ; 00483770
    MOV ECX,dword ptr [EBX + 0x38]      ; 00483774
    SUB ECX,EAX                         ; 00483777
    MOV dword ptr [EBX + 0x38],ECX      ; 00483779
    TEST ECX,ECX                        ; 0048377c
    JGE 0x004836f7                      ; 0048377e
        ;   XREF to: 004836f7 (CONDITIONAL_JUMP)  ; LAB_004836f7
    MOV dword ptr [EBX + 0x18],0x0      ; 00483784
    MOV dword ptr [EBX + 0x38],0x0      ; 0048378b
    JMP 0x004836f7                      ; 00483792
        ;   XREF to: 004836f7 (UNCONDITIONAL_JUMP)  ; LAB_004836f7

