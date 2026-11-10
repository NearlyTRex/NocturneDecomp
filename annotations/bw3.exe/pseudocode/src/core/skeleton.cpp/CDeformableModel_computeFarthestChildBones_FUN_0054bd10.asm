; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0 at 0054a2d9
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bd10
        ;   Label: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10
    PUSH ESI                            ; 0054bd11
    PUSH EDI                            ; 0054bd12
    PUSH EBP                            ; 0054bd13
    MOV EBP,ESP                         ; 0054bd14
    SUB ESP,0x14                        ; 0054bd16
    AND ESP,0xfffffff8                  ; 0054bd19
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054bd1c
    PUSH EBX                            ; 0054bd1f
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0 ; 0054bd20
        ;   XREF to: 005487e0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(CDeformableModel * this_ptr)
    XOR ESI,ESI                         ; 0054bd25
    ADD ESP,0x4                         ; 0054bd27
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054bd2a
    MOV EDI,EAX                         ; 0054bd30
    TEST EDX,EDX                        ; 0054bd32
    JLE 0x0054bd9f                      ; 0054bd34
        ;   XREF to: 0054bd9f (CONDITIONAL_JUMP)  ; LAB_0054bd9f
    LEA EAX,[EBX + 0x2290]              ; 0054bd36
    MOV dword ptr [ESP],EAX             ; 0054bd3c
    MOV dword ptr [ESP + 0x4],EBX       ; 0054bd3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bd43
        ;   Label: LAB_0054bd43
    XOR ECX,ECX                         ; 0054bd47
    MOV dword ptr [EAX + 0x33cc],0xffffffff ; 0054bd49
    XOR EAX,EAX                         ; 0054bd53
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 0054bd55
    MOV dword ptr [ESP + 0xc],EAX       ; 0054bd5b
    TEST EDX,EDX                        ; 0054bd5f
    JLE 0x0054bd89                      ; 0054bd61
        ;   XREF to: 0054bd89 (CONDITIONAL_JUMP)  ; LAB_0054bd89
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bd63
    MOV EDX,dword ptr [ESP]             ; 0054bd67
    MOV EBX,EDI                         ; 0054bd6a
    MOV dword ptr [ESP + 0x8],EAX       ; 0054bd6c
    CMP ESI,dword ptr [EBX + 0x1de9c]   ; 0054bd70
        ;   Label: LAB_0054bd70
    JZ 0x0054bda6                       ; 0054bd76
        ;   XREF to: 0054bda6 (CONDITIONAL_JUMP)  ; LAB_0054bda6
    ADD EBX,0x24                        ; 0054bd78
        ;   Label: LAB_0054bd78
    INC ECX                             ; 0054bd7b
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 0054bd7c
    ADD EDX,0xc                         ; 0054bd82
    CMP ECX,EAX                         ; 0054bd85
    JL 0x0054bd70                       ; 0054bd87
        ;   XREF to: 0054bd70 (CONDITIONAL_JUMP)  ; LAB_0054bd70
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054bd89
        ;   Label: LAB_0054bd89
    INC ESI                             ; 0054bd8d
    ADD ECX,0x4                         ; 0054bd8e
    MOV EBX,dword ptr [EDI + 0x1de78]   ; 0054bd91
    MOV dword ptr [ESP + 0x4],ECX       ; 0054bd97
    CMP ESI,EBX                         ; 0054bd9b
    JL 0x0054bd43                       ; 0054bd9d
        ;   XREF to: 0054bd43 (CONDITIONAL_JUMP)  ; LAB_0054bd43
    MOV ESP,EBP                         ; 0054bd9f
        ;   Label: LAB_0054bd9f
    POP EBP                             ; 0054bda1
    POP EDI                             ; 0054bda2
    POP ESI                             ; 0054bda3
    POP EBX                             ; 0054bda4
    RET                                 ; 0054bda5
    FLD float ptr [EDX + 0x4]           ; 0054bda6
        ;   Label: LAB_0054bda6
    FMUL ST0                            ; 0054bda9
    FLD float ptr [EDX]                 ; 0054bdab
    FMUL ST0                            ; 0054bdad
    FADDP                               ; 0054bdaf
    FLD float ptr [EDX + 0x8]           ; 0054bdb1
    FMUL ST0                            ; 0054bdb4
    FADDP                               ; 0054bdb6
    FSQRT                               ; 0054bdb8
    FST float ptr [ESP + 0x10]          ; 0054bdba
    FCOMP float ptr [ESP + 0xc]         ; 0054bdbe
    FNSTSW AX                           ; 0054bdc2
    SAHF                                ; 0054bdc4
    JBE 0x0054bd78                      ; 0054bdc5
        ;   XREF to: 0054bd78 (CONDITIONAL_JUMP)  ; LAB_0054bd78
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054bdc7
    MOV dword ptr [EAX + 0x33cc],ECX    ; 0054bdcb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054bdd1
    MOV dword ptr [ESP + 0xc],EAX       ; 0054bdd5
    JMP 0x0054bd78                      ; 0054bdd9
        ;   XREF to: 0054bd78 (UNCONDITIONAL_JUMP)  ; LAB_0054bd78

