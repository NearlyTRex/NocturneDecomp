; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_chain_cpp_CChain_FUN_00430eb0(CChain *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430eb0
        ;   Label: core_chain.cpp_CChain_FUN_00430eb0
    PUSH ESI                            ; 00430eb1
    PUSH EDI                            ; 00430eb2
    PUSH EBP                            ; 00430eb3
    SUB ESP,0x30                        ; 00430eb4
    MOV ESI,dword ptr [ESP + 0x44]      ; 00430eb7
    MOV EDI,dword ptr [ESP + 0x48]      ; 00430ebb
    MOV EDX,0x461c3c00                  ; 00430ebf
    MOV EBP,0xc61c3c00                  ; 00430ec4
    MOV dword ptr [ESP + 0x28],EDX      ; 00430ec9
    MOV dword ptr [ESP + 0x2c],EDX      ; 00430ecd
    MOV dword ptr [ESP],EBP             ; 00430ed1
    MOV dword ptr [ESP + 0x4],EBP       ; 00430ed4
    MOV dword ptr [ESP + 0x8],EBP       ; 00430ed8
    MOV dword ptr [ESP + 0x24],EDX      ; 00430edc
    MOV EBX,EDX                         ; 00430ee0
    MOV ECX,dword ptr [ESI + 0x158]     ; 00430ee2
    XOR EBX,EDX                         ; 00430ee8
    TEST ECX,ECX                        ; 00430eea
    JLE 0x00430f74                      ; 00430eec
        ;   XREF to: 00430f74 (CONDITIONAL_JUMP)  ; LAB_00430f74
    LEA ECX,[ESI + 0x28c]               ; 00430ef2
    FLD float ptr [ECX]                 ; 00430ef8
        ;   Label: LAB_00430ef8
    MOV EDX,ECX                         ; 00430efa
    FCOMP float ptr [ESP + 0x24]        ; 00430efc
    FNSTSW AX                           ; 00430f00
    SAHF                                ; 00430f02
    JNC 0x00430f0b                      ; 00430f03
        ;   XREF to: 00430f0b (CONDITIONAL_JUMP)  ; LAB_00430f0b
    MOV EAX,dword ptr [ECX]             ; 00430f05
    MOV dword ptr [ESP + 0x24],EAX      ; 00430f07
    FLD float ptr [EDX + 0x4]           ; 00430f0b
        ;   Label: LAB_00430f0b
    FCOMP float ptr [ESP + 0x28]        ; 00430f0e
    FNSTSW AX                           ; 00430f12
    SAHF                                ; 00430f14
    JNC 0x00430f1e                      ; 00430f15
        ;   XREF to: 00430f1e (CONDITIONAL_JUMP)  ; LAB_00430f1e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00430f17
    MOV dword ptr [ESP + 0x28],EAX      ; 00430f1a
    FLD float ptr [EDX + 0x8]           ; 00430f1e
        ;   Label: LAB_00430f1e
    FCOMP float ptr [ESP + 0x2c]        ; 00430f21
    FNSTSW AX                           ; 00430f25
    SAHF                                ; 00430f27
    JNC 0x00430f31                      ; 00430f28
        ;   XREF to: 00430f31 (CONDITIONAL_JUMP)  ; LAB_00430f31
    MOV EAX,dword ptr [EDX + 0x8]       ; 00430f2a
    MOV dword ptr [ESP + 0x2c],EAX      ; 00430f2d
    FLD float ptr [EDX]                 ; 00430f31
        ;   Label: LAB_00430f31
    FCOMP float ptr [ESP]               ; 00430f33
    FNSTSW AX                           ; 00430f36
    SAHF                                ; 00430f38
    JBE 0x00430f40                      ; 00430f39
        ;   XREF to: 00430f40 (CONDITIONAL_JUMP)  ; LAB_00430f40
    MOV EAX,dword ptr [EDX]             ; 00430f3b
    MOV dword ptr [ESP],EAX             ; 00430f3d
    FLD float ptr [EDX + 0x4]           ; 00430f40
        ;   Label: LAB_00430f40
    FCOMP float ptr [ESP + 0x4]         ; 00430f43
    FNSTSW AX                           ; 00430f47
    SAHF                                ; 00430f49
    JBE 0x00430f53                      ; 00430f4a
        ;   XREF to: 00430f53 (CONDITIONAL_JUMP)  ; LAB_00430f53
    MOV EAX,dword ptr [EDX + 0x4]       ; 00430f4c
    MOV dword ptr [ESP + 0x4],EAX       ; 00430f4f
    FLD float ptr [EDX + 0x8]           ; 00430f53
        ;   Label: LAB_00430f53
    FCOMP float ptr [ESP + 0x8]         ; 00430f56
    FNSTSW AX                           ; 00430f5a
    SAHF                                ; 00430f5c
    JBE 0x00430f66                      ; 00430f5d
        ;   XREF to: 00430f66 (CONDITIONAL_JUMP)  ; LAB_00430f66
    MOV EAX,dword ptr [EDX + 0x8]       ; 00430f5f
    MOV dword ptr [ESP + 0x8],EAX       ; 00430f62
    INC EBX                             ; 00430f66
        ;   Label: LAB_00430f66
    MOV EBP,dword ptr [ESI + 0x158]     ; 00430f67
    ADD ECX,0x24                        ; 00430f6d
    CMP EBX,EBP                         ; 00430f70
    JL 0x00430ef8                       ; 00430f72
        ;   XREF to: 00430ef8 (CONDITIONAL_JUMP)  ; LAB_00430ef8
    LEA EAX,[ESP + 0x24]                ; 00430f74
        ;   Label: LAB_00430f74
    PUSH EAX                            ; 00430f78
    LEA EAX,[ESP + 0x10]                ; 00430f79
    PUSH EAX                            ; 00430f7d
    PUSH ESI                            ; 00430f7e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00430f7f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00430f84
    CMP EDI,EAX                         ; 00430f87
    JZ 0x00430f9b                       ; 00430f89
        ;   XREF to: 00430f9b (CONDITIONAL_JUMP)  ; LAB_00430f9b
    MOV EDX,dword ptr [EAX]             ; 00430f8b
    MOV dword ptr [EDI],EDX             ; 00430f8d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430f8f
    MOV dword ptr [EDI + 0x4],EDX       ; 00430f92
    MOV EDX,dword ptr [EAX + 0x8]       ; 00430f95
    MOV dword ptr [EDI + 0x8],EDX       ; 00430f98
    MOV EAX,ESP                         ; 00430f9b
        ;   Label: LAB_00430f9b
    PUSH EAX                            ; 00430f9d
    LEA EAX,[ESP + 0x1c]                ; 00430f9e
    PUSH EAX                            ; 00430fa2
    PUSH ESI                            ; 00430fa3
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00430fa4
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EDI + 0xc]                 ; 00430fa9
    ADD ESP,0xc                         ; 00430fac
    CMP EDX,EAX                         ; 00430faf
    JNZ 0x00430fbd                      ; 00430fb1
        ;   XREF to: 00430fbd (CONDITIONAL_JUMP)  ; LAB_00430fbd
    MOV EAX,EDI                         ; 00430fb3
    ADD ESP,0x30                        ; 00430fb5
    POP EBP                             ; 00430fb8
    POP EDI                             ; 00430fb9
    POP ESI                             ; 00430fba
    POP EBX                             ; 00430fbb
    RET                                 ; 00430fbc
    MOV ECX,dword ptr [EAX]             ; 00430fbd
        ;   Label: LAB_00430fbd
    MOV dword ptr [EDX],ECX             ; 00430fbf
    MOV ECX,dword ptr [EAX + 0x4]       ; 00430fc1
    MOV dword ptr [EDX + 0x4],ECX       ; 00430fc4
    MOV ECX,dword ptr [EAX + 0x8]       ; 00430fc7
    MOV dword ptr [EDX + 0x8],ECX       ; 00430fca
    MOV EAX,EDI                         ; 00430fcd
    ADD ESP,0x30                        ; 00430fcf
    POP EBP                             ; 00430fd2
    POP EDI                             ; 00430fd3
    POP ESI                             ; 00430fd4
    POP EBX                             ; 00430fd5
    RET                                 ; 00430fd6

