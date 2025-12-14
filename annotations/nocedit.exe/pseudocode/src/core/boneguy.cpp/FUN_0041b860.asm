; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041b860()
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b860
        ;   Label: core_boneguy.cpp_FUN_0041b860
    PUSH EBP                            ; 0041b861
    MOV EBP,ESP                         ; 0041b862
    SUB ESP,0x34                        ; 0041b864
    AND ESP,0xfffffff8                  ; 0041b867
    MOV EDX,dword ptr [EBP + 0xc]       ; 0041b86a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041b86d
    MOV ECX,dword ptr [EAX]             ; 0041b870
    MOV dword ptr [ESP + 0x28],ECX      ; 0041b872
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041b876
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041b879
    MOV dword ptr [ESP + 0x2c],ECX      ; 0041b87c
    MOV dword ptr [ESP + 0x24],EAX      ; 0041b880
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b884
    FLD float ptr [ESP + 0x2c]          ; 0041b888
    MOV dword ptr [ESP + 0x20],EAX      ; 0041b88c
    FCOMP float ptr [ESP + 0x28]        ; 0041b890
    FNSTSW AX                           ; 0041b894
    SAHF                                ; 0041b896
    JC 0x0041b9a3                       ; 0041b897
        ;   XREF to: 0041b9a3 (CONDITIONAL_JUMP)  ; LAB_0041b9a3
    FLD float ptr [ESP + 0x24]          ; 0041b89d
        ;   Label: LAB_0041b89d
    FCOMP float ptr [ESP + 0x20]        ; 0041b8a1
    FNSTSW AX                           ; 0041b8a5
    SAHF                                ; 0041b8a7
    JNC 0x0041b8b2                      ; 0041b8a8
        ;   XREF to: 0041b8b2 (CONDITIONAL_JUMP)  ; LAB_0041b8b2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041b8aa
    MOV dword ptr [ESP + 0x20],EAX      ; 0041b8ae
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041b8b2
        ;   Label: LAB_0041b8b2
    FLD float ptr [ESP + 0x2c]          ; 0041b8b6
    MOV dword ptr [ESP + 0x10],EAX      ; 0041b8ba
    MOV dword ptr [ESP + 0x20],ECX      ; 0041b9a3
        ;   Label: LAB_0041b9a3
    JMP 0x0041b89d                      ; 0041b9a7
        ;   XREF to: 0041b89d (UNCONDITIONAL_JUMP)  ; LAB_0041b89d

