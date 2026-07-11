; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447670(undefined4 param_1,float *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   FUN_0041ceb0 at 0041d001
;   FUN_00482950 at 00482c25
;   FUN_0048d5d0 at 0048d905
;   FUN_00509a80 at 00509d5b
;
; Referenced Globals:
;   undefined4 DAT_0059bddc
;   undefined4 DAT_005ad450
;   undefined4 DAT_005ad454
;   undefined4 DAT_005ad458
;   undefined4 DAT_005b7624
;   undefined4 DAT_00b0e2fc
;   undefined4 DAT_0140efa8
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c039a8
;
; Called Functions:
;   FUN_004475a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00447670
        ;   Label: FUN_00447670
    SUB ESP,0xc                         ; 00447671
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447674
    TEST EAX,EAX                        ; 00447678
    JZ 0x00447692                       ; 0044767a
        ;   XREF to: 00447692 (CONDITIONAL_JUMP)  ; LAB_00447692
    CMP dword ptr [0x0140efa8],0x0      ; 0044767c | DAT_0140efa8
    JZ 0x0044769c                       ; 00447683
        ;   XREF to: 0044769c (CONDITIONAL_JUMP)  ; LAB_0044769c
    XOR EBP,EBP                         ; 00447685
    MOV dword ptr [0x01c038f4],EBP      ; 00447687 | DAT_01c038f4
    ADD ESP,0xc                         ; 0044768d
    POP EBP                             ; 00447690
    RET                                 ; 00447691
    MOV [0x01c038f4],EAX                ; 00447692 | DAT_01c038f4
        ;   Label: LAB_00447692
    ADD ESP,0xc                         ; 00447697
    POP EBP                             ; 0044769a
    RET                                 ; 0044769b
    PUSH EDI                            ; 0044769c
        ;   Label: LAB_0044769c
    PUSH ESI                            ; 0044769d
    PUSH EBX                            ; 0044769e
    LEA EBX,[ESP + 0xc]                 ; 0044769f
    MOV ECX,dword ptr [ESP + 0x28]      ; 004476a3
    FLD float ptr [EAX]                 ; 004476a7
    FMUL float ptr [0x0059bddc]         ; 004476a9 | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 004476af
    FLD float ptr [EAX + 0x4]           ; 004476b1
    FMUL float ptr [0x0059bddc]         ; 004476b4 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004476ba
    FLD float ptr [EAX + 0x8]           ; 004476bd
    FMUL float ptr [0x0059bddc]         ; 004476c0 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 004476c6
    PUSH ECX                            ; 004476c9
    LEA EAX,[ESP + 0x10]                ; 004476ca
    PUSH EAX                            ; 004476ce
    MOV EBX,dword ptr [ESP + 0x28]      ; 004476cf
    PUSH EBX                            ; 004476d3
    CALL FUN_004475a0                   ; 004476d4
        ;   XREF to: 004475a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004475a0()
    MOV EDX,dword ptr [0x005ad454]      ; 004476d9 | DAT_005ad454
    MOV EDI,dword ptr [0x005b7624]      ; 004476df | DAT_005b7624
    ADD ESP,0xc                         ; 004476e5
    MOV ESI,EAX                         ; 004476e8
    MOV EAX,[0x005ad458]                ; 004476ea | DAT_005ad458
    MOV EBX,dword ptr [EDX*0x4 + 0xb0e1fc] ; 004476ef | DAT_00b0e2fc
    MOV EDX,dword ptr [0x005ad450]      ; 004476f6 | DAT_005ad450
    AND EBX,0xff                        ; 004476fc
    MOV EAX,dword ptr [EAX*0x4 + 0xb0e1fc] ; 00447702 | DAT_00b0e2fc
    MOV EDX,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00447709 | DAT_00b0e2fc
    AND EAX,0xff                        ; 00447710
    AND EDX,0xff                        ; 00447715
    CMP EDI,0x20                        ; 0044771b
    JNZ 0x00447752                      ; 0044771e
        ;   XREF to: 00447752 (CONDITIONAL_JUMP)  ; LAB_00447752
    MOV CL,byte ptr [0x01c00624]        ; 00447720 | DAT_01c00624
    SHL EDX,CL                          ; 00447726
    MOV CL,byte ptr [0x01c00630]        ; 00447728 | DAT_01c00630
    SHL EBX,CL                          ; 0044772e
    MOV CL,byte ptr [0x01c0063c]        ; 00447730 | DAT_01c0063c
    OR EDX,EBX                          ; 00447736
    SHL EAX,CL                          ; 00447738
    MOV ECX,EDX                         ; 0044773a
    OR ECX,EAX                          ; 0044773c
        ;   Label: LAB_0044773c
    MOV dword ptr [0x01c038f4],ESI      ; 0044773e | DAT_01c038f4
    MOV dword ptr [0x01c039a8],ECX      ; 00447744 | DAT_01c039a8
    POP EBX                             ; 0044774a
    POP ESI                             ; 0044774b
    POP EDI                             ; 0044774c
    ADD ESP,0xc                         ; 0044774d
    POP EBP                             ; 00447750
    RET                                 ; 00447751
    MOV ECX,EDX                         ; 00447752
        ;   Label: LAB_00447752
    SHL EBX,0x8                         ; 00447754
    SHL ECX,0x10                        ; 00447757
    OR ECX,EBX                          ; 0044775a
    JMP 0x0044773c                      ; 0044775c
        ;   XREF to: 0044773c (UNCONDITIONAL_JUMP)  ; LAB_0044773c

