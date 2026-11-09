; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00544ae0(CDeformableModel *this_ptr)
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
;   core_skeleton.cpp_FUN_005430b0 at 005430c9
;
; Called Functions:
;   core_skeleton.cpp_FUN_005415d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544ae0
        ;   Label: core_skeleton.cpp_FUN_00544ae0
    PUSH ESI                            ; 00544ae1
    PUSH EDI                            ; 00544ae2
    PUSH EBP                            ; 00544ae3
    MOV EBP,ESP                         ; 00544ae4
    SUB ESP,0x14                        ; 00544ae6
    AND ESP,0xfffffff8                  ; 00544ae9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00544aec
    PUSH EBX                            ; 00544aef
    CALL core_skeleton.cpp_FUN_005415d0 ; 00544af0
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_005415d0(CDeformableModel * this_ptr)
    XOR ESI,ESI                         ; 00544af5
    ADD ESP,0x4                         ; 00544af7
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00544afa
    MOV EDI,EAX                         ; 00544b00
    TEST EDX,EDX                        ; 00544b02
    JLE 0x00544b6f                      ; 00544b04
        ;   XREF to: 00544b6f (CONDITIONAL_JUMP)  ; LAB_00544b6f
    LEA EAX,[EBX + 0x1750]              ; 00544b06
    MOV dword ptr [ESP],EAX             ; 00544b0c
    MOV dword ptr [ESP + 0x4],EBX       ; 00544b0f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00544b13
        ;   Label: LAB_00544b13
    XOR ECX,ECX                         ; 00544b17
    MOV dword ptr [EAX + 0x288c],0xffffffff ; 00544b19
    XOR EAX,EAX                         ; 00544b23
    MOV EDX,dword ptr [EDI + 0x1d1f8]   ; 00544b25
    MOV dword ptr [ESP + 0xc],EAX       ; 00544b2b
    TEST EDX,EDX                        ; 00544b2f
    JLE 0x00544b59                      ; 00544b31
        ;   XREF to: 00544b59 (CONDITIONAL_JUMP)  ; LAB_00544b59
    MOV EAX,dword ptr [ESP + 0x4]       ; 00544b33
    MOV EDX,dword ptr [ESP]             ; 00544b37
    MOV EBX,EDI                         ; 00544b3a
    MOV dword ptr [ESP + 0x8],EAX       ; 00544b3c
    CMP ESI,dword ptr [EBX + 0x1d21c]   ; 00544b40
        ;   Label: LAB_00544b40
    JZ 0x00544b76                       ; 00544b46
        ;   XREF to: 00544b76 (CONDITIONAL_JUMP)  ; LAB_00544b76
    ADD EBX,0x24                        ; 00544b48
        ;   Label: LAB_00544b48
    INC ECX                             ; 00544b4b
    MOV EAX,dword ptr [EDI + 0x1d1f8]   ; 00544b4c
    ADD EDX,0xc                         ; 00544b52
    CMP ECX,EAX                         ; 00544b55
    JL 0x00544b40                       ; 00544b57
        ;   XREF to: 00544b40 (CONDITIONAL_JUMP)  ; LAB_00544b40
    MOV ECX,dword ptr [ESP + 0x4]       ; 00544b59
        ;   Label: LAB_00544b59
    INC ESI                             ; 00544b5d
    ADD ECX,0x4                         ; 00544b5e
    MOV EBX,dword ptr [EDI + 0x1d1f8]   ; 00544b61
    MOV dword ptr [ESP + 0x4],ECX       ; 00544b67
    CMP ESI,EBX                         ; 00544b6b
    JL 0x00544b13                       ; 00544b6d
        ;   XREF to: 00544b13 (CONDITIONAL_JUMP)  ; LAB_00544b13
    MOV ESP,EBP                         ; 00544b6f
        ;   Label: LAB_00544b6f
    POP EBP                             ; 00544b71
    POP EDI                             ; 00544b72
    POP ESI                             ; 00544b73
    POP EBX                             ; 00544b74
    RET                                 ; 00544b75
    FLD float ptr [EDX + 0x4]           ; 00544b76
        ;   Label: LAB_00544b76
    FMUL ST0                            ; 00544b79
    FLD float ptr [EDX]                 ; 00544b7b
    FMUL ST0                            ; 00544b7d
    FADDP                               ; 00544b7f
    FLD float ptr [EDX + 0x8]           ; 00544b81
    FMUL ST0                            ; 00544b84
    FADDP                               ; 00544b86
    FSQRT                               ; 00544b88
    FST float ptr [ESP + 0x10]          ; 00544b8a
    FCOMP float ptr [ESP + 0xc]         ; 00544b8e
    FNSTSW AX                           ; 00544b92
    SAHF                                ; 00544b94
    JBE 0x00544b48                      ; 00544b95
        ;   XREF to: 00544b48 (CONDITIONAL_JUMP)  ; LAB_00544b48
    MOV EAX,dword ptr [ESP + 0x8]       ; 00544b97
    MOV dword ptr [EAX + 0x288c],ECX    ; 00544b9b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00544ba1
    MOV dword ptr [ESP + 0xc],EAX       ; 00544ba5
    JMP 0x00544b48                      ; 00544ba9
        ;   XREF to: 00544b48 (UNCONDITIONAL_JUMP)  ; LAB_00544b48

