; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; CDeformableModel * Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0 at 0059c209
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059dbe0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
    PUSH ESI                            ; 0059dbe1
    PUSH EDI                            ; 0059dbe2
    PUSH EBP                            ; 0059dbe3
    SUB ESP,0x10                        ; 0059dbe4
    MOV EBX,dword ptr [ESP + 0x24]      ; 0059dbe7
    PUSH EBX                            ; 0059dbeb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0059dbec
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    XOR ESI,ESI                         ; 0059dbf1
    ADD ESP,0x4                         ; 0059dbf3
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0059dbf6
    MOV EDI,EAX                         ; 0059dbfc
    TEST EDX,EDX                        ; 0059dbfe
    JLE 0x0059dc67                      ; 0059dc00
        ;   XREF to: 0059dc67 (CONDITIONAL_JUMP)  ; LAB_0059dc67
    LEA EAX,[EBX + 0x7c90]              ; 0059dc02
    MOV dword ptr [ESP],EAX             ; 0059dc08
    MOV dword ptr [ESP + 0x4],EBX       ; 0059dc0b
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059dc0f
        ;   Label: LAB_0059dc0f
    XOR EBP,EBP                         ; 0059dc13
    MOV dword ptr [EAX + 0x8dcc],0xffffffff ; 0059dc15
    XOR ECX,ECX                         ; 0059dc1f
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0059dc21
    MOV dword ptr [ESP + 0x8],EBP       ; 0059dc27
    TEST EAX,EAX                        ; 0059dc2b
    JLE 0x0059dc51                      ; 0059dc2d
        ;   XREF to: 0059dc51 (CONDITIONAL_JUMP)  ; LAB_0059dc51
    MOV EDX,dword ptr [ESP]             ; 0059dc2f
    MOV EBP,dword ptr [ESP + 0x4]       ; 0059dc32
    MOV EBX,EDI                         ; 0059dc36
    CMP ESI,dword ptr [EBX + 0x2857c]   ; 0059dc38
        ;   Label: LAB_0059dc38
    JZ 0x0059dc6f                       ; 0059dc3e
        ;   XREF to: 0059dc6f (CONDITIONAL_JUMP)  ; LAB_0059dc6f
    ADD EBX,0x24                        ; 0059dc40
        ;   Label: LAB_0059dc40
    INC ECX                             ; 0059dc43
    MOV EAX,dword ptr [EDI + 0x28558]   ; 0059dc44
    ADD EDX,0xc                         ; 0059dc4a
    CMP ECX,EAX                         ; 0059dc4d
    JL 0x0059dc38                       ; 0059dc4f
        ;   XREF to: 0059dc38 (CONDITIONAL_JUMP)  ; LAB_0059dc38
    MOV ECX,dword ptr [ESP + 0x4]       ; 0059dc51
        ;   Label: LAB_0059dc51
    INC ESI                             ; 0059dc55
    ADD ECX,0x4                         ; 0059dc56
    MOV EBX,dword ptr [EDI + 0x28558]   ; 0059dc59
    MOV dword ptr [ESP + 0x4],ECX       ; 0059dc5f
    CMP ESI,EBX                         ; 0059dc63
    JL 0x0059dc0f                       ; 0059dc65
        ;   XREF to: 0059dc0f (CONDITIONAL_JUMP)  ; LAB_0059dc0f
    ADD ESP,0x10                        ; 0059dc67
        ;   Label: LAB_0059dc67
    POP EBP                             ; 0059dc6a
    POP EDI                             ; 0059dc6b
    POP ESI                             ; 0059dc6c
    POP EBX                             ; 0059dc6d
    RET                                 ; 0059dc6e
    FLD float ptr [EDX + 0x4]           ; 0059dc6f
        ;   Label: LAB_0059dc6f
    FMUL ST0                            ; 0059dc72
    FLD float ptr [EDX]                 ; 0059dc74
    FMUL ST0                            ; 0059dc76
    FADDP                               ; 0059dc78
    FLD float ptr [EDX + 0x8]           ; 0059dc7a
    FMUL ST0                            ; 0059dc7d
    FADDP                               ; 0059dc7f
    FSQRT                               ; 0059dc81
    FST float ptr [ESP + 0xc]           ; 0059dc83
    FCOMP float ptr [ESP + 0x8]         ; 0059dc87
    FNSTSW AX                           ; 0059dc8b
    SAHF                                ; 0059dc8d
    JBE 0x0059dc40                      ; 0059dc8e
        ;   XREF to: 0059dc40 (CONDITIONAL_JUMP)  ; LAB_0059dc40
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059dc90
    MOV dword ptr [EBP + 0x8dcc],ECX    ; 0059dc94
    MOV dword ptr [ESP + 0x8],EAX       ; 0059dc9a
    JMP 0x0059dc40                      ; 0059dc9e
        ;   XREF to: 0059dc40 (UNCONDITIONAL_JUMP)  ; LAB_0059dc40

