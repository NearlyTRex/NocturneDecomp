; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0(CDeformableModel *this_ptr,int lod_level,int triangle_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_level
; int              Stack[0xc]:4   triangle_index
; Local Variables:
; float[100]       Stack[-0x1a4]:400  local_1a4
; ushort *         Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 004097f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dca0
        ;   Label: core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
    PUSH ESI                            ; 0059dca1
    PUSH EDI                            ; 0059dca2
    PUSH EBP                            ; 0059dca3
    SUB ESP,0x194                       ; 0059dca4
    XOR EAX,EAX                         ; 0059dcaa
    ADD EAX,0x4                         ; 0059dcac
        ;   Label: LAB_0059dcac
    XOR EDX,EDX                         ; 0059dcaf
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0059dcb1
    CMP EAX,0x190                       ; 0059dcb5
    JNZ 0x0059dcac                      ; 0059dcba
        ;   XREF to: 0059dcac (CONDITIONAL_JUMP)  ; LAB_0059dcac
    MOV EBP,dword ptr [ESP + 0x1ac]     ; 0059dcbc
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 0059dcc3
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 0059dcca
    SHL EBP,0x2                         ; 0059dcd1
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059dcd4
    ADD EBP,ECX                         ; 0059dcdb
    ADD EDX,EAX                         ; 0059dcdd
    MOV EAX,dword ptr [EBP + 0x7c]      ; 0059dcdf
    ADD EDX,EDX                         ; 0059dce2
    ADD EAX,EDX                         ; 0059dce4
    MOV EDI,EAX                         ; 0059dce6
    ADD EAX,0x6                         ; 0059dce8
    MOV dword ptr [ESP + 0x190],EAX     ; 0059dceb
    XOR EAX,EAX                         ; 0059dcf2
        ;   Label: LAB_0059dcf2
    MOV AX,word ptr [EDI]               ; 0059dcf4
    IMUL EAX,EAX,0x34                   ; 0059dcf7
    MOV ESI,dword ptr [EBP + 0x40]      ; 0059dcfa
    ADD ESI,EAX                         ; 0059dcfd
    XOR ECX,ECX                         ; 0059dcff
    MOV EDX,ESI                         ; 0059dd01
    MOV EAX,ESI                         ; 0059dd03
    XOR EBX,EBX                         ; 0059dd05
        ;   Label: LAB_0059dd05
    MOV BL,byte ptr [ESI]               ; 0059dd07
    CMP ECX,EBX                         ; 0059dd09
    JL 0x0059dd4a                       ; 0059dd0b
        ;   XREF to: 0059dd4a (CONDITIONAL_JUMP)  ; LAB_0059dd4a
    MOV EBX,dword ptr [ESP + 0x190]     ; 0059dd0d
    ADD EDI,0x2                         ; 0059dd14
    CMP EDI,EBX                         ; 0059dd17
    JNZ 0x0059dcf2                      ; 0059dd19
        ;   XREF to: 0059dcf2 (CONDITIONAL_JUMP)  ; LAB_0059dcf2
    MOV EBX,0x1                         ; 0059dd1b
    MOV EDX,0x4                         ; 0059dd20
    XOR ECX,ECX                         ; 0059dd25
    FLD float ptr [ESP + EDX*0x1]       ; 0059dd27
        ;   Label: LAB_0059dd27
    FCOMP float ptr [ESP + ECX*0x4]     ; 0059dd2a
    FNSTSW AX                           ; 0059dd2d
    SAHF                                ; 0059dd2f
    JBE 0x0059dd34                      ; 0059dd30
        ;   XREF to: 0059dd34 (CONDITIONAL_JUMP)  ; LAB_0059dd34
    MOV ECX,EBX                         ; 0059dd32
    INC EBX                             ; 0059dd34
        ;   Label: LAB_0059dd34
    ADD EDX,0x4                         ; 0059dd35
    CMP EBX,0x64                        ; 0059dd38
    JL 0x0059dd27                       ; 0059dd3b
        ;   XREF to: 0059dd27 (CONDITIONAL_JUMP)  ; LAB_0059dd27
    MOV EAX,ECX                         ; 0059dd3d
    ADD ESP,0x194                       ; 0059dd3f
    POP EBP                             ; 0059dd45
    POP EDI                             ; 0059dd46
    POP ESI                             ; 0059dd47
    POP EBX                             ; 0059dd48
    RET                                 ; 0059dd49
    XOR EBX,EBX                         ; 0059dd4a
        ;   Label: LAB_0059dd4a
    FLD float ptr [EDX + 0x4]           ; 0059dd4c
    MOV BL,byte ptr [EAX + 0x1]         ; 0059dd4f
    ADD EDX,0x4                         ; 0059dd52
    INC EAX                             ; 0059dd55
    FADD float ptr [ESP + EBX*0x4]      ; 0059dd56
    INC ECX                             ; 0059dd59
    FSTP float ptr [ESP + EBX*0x4]      ; 0059dd5a
    JMP 0x0059dd05                      ; 0059dd5d
        ;   XREF to: 0059dd05 (UNCONDITIONAL_JUMP)  ; LAB_0059dd05

