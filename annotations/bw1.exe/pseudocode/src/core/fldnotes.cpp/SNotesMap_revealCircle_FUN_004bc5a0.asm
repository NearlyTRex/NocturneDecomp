; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_revealCircle_FUN_004bc5a0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450 at 004bc522
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004bc690
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bc5a0
        ;   Label: core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004bc5a0
    SUB ESP,0x10                        ; 004bc5a1
    MOV EBP,dword ptr [ESP + 0x24]      ; 004bc5a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bc5a8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004bc5ac
    CMP EDX,dword ptr [EAX + 0x964]     ; 004bc5b0
    JNZ 0x004bc5cc                      ; 004bc5b6
        ;   XREF to: 004bc5cc (CONDITIONAL_JUMP)  ; LAB_004bc5cc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bc5b8
    MOV ECX,dword ptr [ESP + 0x20]      ; 004bc5bc
    CMP ECX,dword ptr [EAX + 0x968]     ; 004bc5c0
    JZ 0x004bc655                       ; 004bc5c6
        ;   XREF to: 004bc655 (CONDITIONAL_JUMP)  ; LAB_004bc655
    PUSH EDI                            ; 004bc5cc
        ;   Label: LAB_004bc5cc
    PUSH ESI                            ; 004bc5cd
    PUSH EBX                            ; 004bc5ce
    MOV EDI,EBP                         ; 004bc5cf
    IMUL EDI,EBP                        ; 004bc5d1
    MOV EBX,EBP                         ; 004bc5d4
    MOV dword ptr [ESP + 0x10],EBP      ; 004bc5d6
    NEG EBX                             ; 004bc5da
    MOV dword ptr [ESP + 0x10],EBX      ; 004bc5dc
    CMP EBP,EBX                         ; 004bc5e0
    JL 0x004bc63a                       ; 004bc5e2
        ;   XREF to: 004bc63a (CONDITIONAL_JUMP)  ; LAB_004bc63a
    MOV EAX,EBX                         ; 004bc5e4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004bc5e6
    ADD EAX,EBX                         ; 004bc5ea
    MOV dword ptr [ESP + 0xc],EAX       ; 004bc5ec
    MOV EBX,EBP                         ; 004bc5f0
        ;   Label: LAB_004bc5f0
    NEG EBX                             ; 004bc5f2
    CMP EBX,EBP                         ; 004bc5f4
    JG 0x004bc624                       ; 004bc5f6
        ;   XREF to: 004bc624 (CONDITIONAL_JUMP)  ; LAB_004bc624
    MOV EAX,dword ptr [ESP + 0xc]       ; 004bc5f8
    MOV dword ptr [ESP + 0x14],EAX      ; 004bc5fc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004bc600
    IMUL EAX,EAX                        ; 004bc604
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bc607
    ADD ESI,EBX                         ; 004bc60b
    MOV dword ptr [ESP + 0x18],EAX      ; 004bc60d
    MOV EDX,EBX                         ; 004bc611
        ;   Label: LAB_004bc611
    IMUL EDX,EBX                        ; 004bc613
    ADD EDX,dword ptr [ESP + 0x18]      ; 004bc616
    CMP EDX,EDI                         ; 004bc61a
    JLE 0x004bc65a                      ; 004bc61c
        ;   XREF to: 004bc65a (CONDITIONAL_JUMP)  ; LAB_004bc65a
    INC EBX                             ; 004bc61e
        ;   Label: LAB_004bc61e
    INC ESI                             ; 004bc61f
    CMP EBX,EBP                         ; 004bc620
    JLE 0x004bc611                      ; 004bc622
        ;   XREF to: 004bc611 (CONDITIONAL_JUMP)  ; LAB_004bc611
    MOV EAX,dword ptr [ESP + 0xc]       ; 004bc624
        ;   Label: LAB_004bc624
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bc628
    INC EAX                             ; 004bc62c
    INC EDX                             ; 004bc62d
    MOV dword ptr [ESP + 0xc],EAX       ; 004bc62e
    MOV dword ptr [ESP + 0x10],EDX      ; 004bc632
    CMP EBP,EDX                         ; 004bc636
    JGE 0x004bc5f0                      ; 004bc638
        ;   XREF to: 004bc5f0 (CONDITIONAL_JUMP)  ; LAB_004bc5f0
    MOV EDX,dword ptr [ESP + 0x24]      ; 004bc63a
        ;   Label: LAB_004bc63a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004bc63e
    MOV dword ptr [EDX + 0x964],EAX     ; 004bc642
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004bc648
    MOV dword ptr [EDX + 0x968],EAX     ; 004bc64c
    POP EBX                             ; 004bc652
    POP ESI                             ; 004bc653
    POP EDI                             ; 004bc654
    ADD ESP,0x10                        ; 004bc655
        ;   Label: LAB_004bc655
    POP EBP                             ; 004bc658
    RET                                 ; 004bc659
    IMUL EDX,EDX,0xff                   ; 004bc65a
        ;   Label: LAB_004bc65a
    MOV EAX,EDX                         ; 004bc660
    SAR EDX,0x1f                        ; 004bc662
    IDIV EDI                            ; 004bc665
    MOV EDX,0xff                        ; 004bc667
    SUB EDX,EAX                         ; 004bc66c
    PUSH EDX                            ; 004bc66e
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bc66f
    PUSH EDX                            ; 004bc673
    PUSH ESI                            ; 004bc674
    MOV ECX,dword ptr [ESP + 0x30]      ; 004bc675
    PUSH ECX                            ; 004bc679
    CALL core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004bc690 ; 004bc67a
        ;   XREF to: 004bc690 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004bc690(SNotesMap * this_ptr, int param_2, int param_3, int param_4)
    ADD ESP,0x10                        ; 004bc67f
    JMP 0x004bc61e                      ; 004bc682
        ;   XREF to: 004bc61e (UNCONDITIONAL_JUMP)  ; LAB_004bc61e

