; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005ba990(CVector3f *dimensions)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dimensions
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processPickup_FUN_005bd560 at 005bdd00
;
; Referenced Globals:
;   undefined4 DAT_005fa3fc
;   undefined4 DAT_005fa404
;   undefined4 DAT_005fa40c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ba990
        ;   Label: core_zombie.cpp_classifyObjectShape_FUN_005ba990
    MOV EBP,ESP                         ; 005ba991
    SUB ESP,0x28                        ; 005ba993
    AND ESP,0xfffffff8                  ; 005ba996
    MOV EDX,dword ptr [EBP + 0x8]       ; 005ba999
    FLD float ptr [EDX]                 ; 005ba99c
    FST double ptr [ESP + 0x8]          ; 005ba99e
    FCOMP double ptr [0x005fa3fc]       ; 005ba9a2 | DAT_005fa3fc
    FNSTSW AX                           ; 005ba9a8
    SAHF                                ; 005ba9aa
    JC 0x005baa68                       ; 005ba9ab
        ;   XREF to: 005baa68 (CONDITIONAL_JUMP)  ; LAB_005baa68
    FLD float ptr [EDX]                 ; 005ba9b1
        ;   Label: LAB_005ba9b1
    FLD1                                ; 005ba9b3
    FCOMPP                              ; 005ba9b5
    FNSTSW AX                           ; 005ba9b7
    SAHF                                ; 005ba9b9
    JBE 0x005baa02                      ; 005ba9ba
        ;   XREF to: 005baa02 (CONDITIONAL_JUMP)  ; LAB_005baa02
    FLD float ptr [EDX + 0x4]           ; 005ba9bc
    FLD1                                ; 005ba9bf
    FCOMPP                              ; 005ba9c1
    FNSTSW AX                           ; 005ba9c3
    SAHF                                ; 005ba9c5
    JBE 0x005baa02                      ; 005ba9c6
        ;   XREF to: 005baa02 (CONDITIONAL_JUMP)  ; LAB_005baa02
    FLD float ptr [EDX + 0x8]           ; 005ba9c8
    FST double ptr [ESP + 0x20]         ; 005ba9cb
    FCOMP double ptr [0x005fa3fc]       ; 005ba9cf | DAT_005fa3fc
    FNSTSW AX                           ; 005ba9d5
    SAHF                                ; 005ba9d7
    JBE 0x005baa02                      ; 005ba9d8
        ;   XREF to: 005baa02 (CONDITIONAL_JUMP)  ; LAB_005baa02
    FLD double ptr [ESP + 0x20]         ; 005ba9da
    FCOMP double ptr [0x005fa40c]       ; 005ba9de | DAT_005fa40c
    FNSTSW AX                           ; 005ba9e4
    SAHF                                ; 005ba9e6
    JNC 0x005baa02                      ; 005ba9e7
        ;   XREF to: 005baa02 (CONDITIONAL_JUMP)  ; LAB_005baa02
    FLD float ptr [EDX + 0x8]           ; 005ba9e9
    FCOMP float ptr [EDX]               ; 005ba9ec
    FNSTSW AX                           ; 005ba9ee
    SAHF                                ; 005ba9f0
    JBE 0x005baa02                      ; 005ba9f1
        ;   XREF to: 005baa02 (CONDITIONAL_JUMP)  ; LAB_005baa02
    FLD float ptr [EDX + 0x8]           ; 005ba9f3
    FCOMP float ptr [EDX + 0x4]         ; 005ba9f6
    FNSTSW AX                           ; 005ba9f9
    SAHF                                ; 005ba9fb
    JA 0x005baad1                       ; 005ba9fc
        ;   XREF to: 005baad1 (CONDITIONAL_JUMP)  ; LAB_005baad1
    FLD float ptr [EDX]                 ; 005baa02
        ;   Label: LAB_005baa02
    FLD1                                ; 005baa04
    FCOMPP                              ; 005baa06
    FNSTSW AX                           ; 005baa08
    SAHF                                ; 005baa0a
    JBE 0x005baacb                      ; 005baa0b
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    FLD float ptr [EDX + 0x4]           ; 005baa11
    FLD1                                ; 005baa14
    FCOMPP                              ; 005baa16
    FNSTSW AX                           ; 005baa18
    SAHF                                ; 005baa1a
    JBE 0x005baacb                      ; 005baa1b
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    FLD1                                ; 005baa21
    FLD float ptr [EDX + 0x8]           ; 005baa23
    FSTP double ptr [ESP + 0x10]        ; 005baa26
    FCOMP double ptr [ESP + 0x10]       ; 005baa2a
    FNSTSW AX                           ; 005baa2e
    SAHF                                ; 005baa30
    JNC 0x005baacb                      ; 005baa31
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    FLD double ptr [ESP + 0x10]         ; 005baa37
    FCOMP double ptr [0x005fa3fc]       ; 005baa3b | DAT_005fa3fc
    FNSTSW AX                           ; 005baa41
    SAHF                                ; 005baa43
    JNC 0x005baacb                      ; 005baa44
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    FLD float ptr [EDX + 0x8]           ; 005baa4a
    FCOMP float ptr [EDX]               ; 005baa4d
    FNSTSW AX                           ; 005baa4f
    SAHF                                ; 005baa51
    JBE 0x005baacb                      ; 005baa52
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    FLD float ptr [EDX + 0x8]           ; 005baa54
    FCOMP float ptr [EDX + 0x4]         ; 005baa57
    FNSTSW AX                           ; 005baa5a
    SAHF                                ; 005baa5c
    JBE 0x005baacb                      ; 005baa5d
        ;   XREF to: 005baacb (CONDITIONAL_JUMP)  ; LAB_005baacb
    MOV EAX,0x3                         ; 005baa5f
    MOV ESP,EBP                         ; 005baa64
    POP EBP                             ; 005baa66
    RET                                 ; 005baa67
    FLD float ptr [EDX + 0x4]           ; 005baa68
        ;   Label: LAB_005baa68
    FST double ptr [ESP + 0x18]         ; 005baa6b
    FCOMP double ptr [0x005fa3fc]       ; 005baa6f | DAT_005fa3fc
    FNSTSW AX                           ; 005baa75
    SAHF                                ; 005baa77
    JNC 0x005ba9b1                      ; 005baa78
        ;   XREF to: 005ba9b1 (CONDITIONAL_JUMP)  ; LAB_005ba9b1
    FLD float ptr [EDX + 0x8]           ; 005baa7e
    FST double ptr [ESP]                ; 005baa81
    FCOMP double ptr [0x005fa3fc]       ; 005baa84 | DAT_005fa3fc
    FNSTSW AX                           ; 005baa8a
    SAHF                                ; 005baa8c
    JNC 0x005ba9b1                      ; 005baa8d
        ;   XREF to: 005ba9b1 (CONDITIONAL_JUMP)  ; LAB_005ba9b1
    FLD double ptr [ESP + 0x8]          ; 005baa93
    FCOMP double ptr [0x005fa404]       ; 005baa97 | DAT_005fa404
    FNSTSW AX                           ; 005baa9d
    SAHF                                ; 005baa9f
    JBE 0x005ba9b1                      ; 005baaa0
        ;   XREF to: 005ba9b1 (CONDITIONAL_JUMP)  ; LAB_005ba9b1
    FLD double ptr [ESP + 0x18]         ; 005baaa6
    FCOMP double ptr [0x005fa404]       ; 005baaaa | DAT_005fa404
    FNSTSW AX                           ; 005baab0
    SAHF                                ; 005baab2
    JBE 0x005ba9b1                      ; 005baab3
        ;   XREF to: 005ba9b1 (CONDITIONAL_JUMP)  ; LAB_005ba9b1
    FLD double ptr [ESP]                ; 005baab9
    FCOMP double ptr [0x005fa404]       ; 005baabc | DAT_005fa404
    FNSTSW AX                           ; 005baac2
    SAHF                                ; 005baac4
    JBE 0x005ba9b1                      ; 005baac5
        ;   XREF to: 005ba9b1 (CONDITIONAL_JUMP)  ; LAB_005ba9b1
    XOR EAX,EAX                         ; 005baacb
        ;   Label: LAB_005baacb
    MOV ESP,EBP                         ; 005baacd
    POP EBP                             ; 005baacf
    RET                                 ; 005baad0
    MOV EAX,0x1                         ; 005baad1
        ;   Label: LAB_005baad1
    MOV ESP,EBP                         ; 005baad6
    POP EBP                             ; 005baad8
    RET                                 ; 005baad9

