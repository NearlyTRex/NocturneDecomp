; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
;
; XREF[3]:
;   core_doc.cpp_FUN_00469550 at 0046a46a
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6dd7
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 0058682c
;
; Referenced Globals:
;   undefined4 DAT_005d4d60
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bb0
;   core_box.cpp_FUN_00420ee0
;   core_boxactor.cpp_FUN_00421e80
;   core_boxactor.cpp_FUN_00422d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422ab0
        ;   Label: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0
    PUSH ESI                            ; 00422ab1
    PUSH EDI                            ; 00422ab2
    PUSH EBP                            ; 00422ab3
    MOV EBP,ESP                         ; 00422ab4
    SUB ESP,0x94                        ; 00422ab6
    AND ESP,0xfffffff8                  ; 00422abc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00422abf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00422ac2
    PUSH EDX                            ; 00422ac5
    PUSH EBX                            ; 00422ac6
    LEA ESI,[ESP + 0x58]                ; 00422ac7
    CALL core_actor.cpp_FUN_00408bb0    ; 00422acb
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 00422ad0
    LEA EDI,[ESP + 0x5c]                ; 00422ad3
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00422ad7
    LEA ESI,[ESP + 0x50]                ; 00422ada
    PUSH ECX                            ; 00422ade
    MOVSD ES:EDI,ESI                    ; 00422adf
    MOVSD ES:EDI,ESI                    ; 00422ae0
    MOVSD ES:EDI,ESI                    ; 00422ae1
    PUSH EBX                            ; 00422ae2
    LEA ESI,[ESP + 0x70]                ; 00422ae3
    LEA EDI,[ESP + 0x40]                ; 00422ae7
    CALL core_actor.cpp_FUN_00408b00    ; 00422aeb
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x70]                ; 00422af0
    ADD ESP,0x8                         ; 00422af4
    MOVSD ES:EDI,ESI                    ; 00422af7
    MOVSD ES:EDI,ESI                    ; 00422af8
    MOVSD ES:EDI,ESI                    ; 00422af9
    FLD float ptr [ESP + 0x3c]          ; 00422afa
    FMUL float ptr [ESP + 0x60]         ; 00422afe
    FLD float ptr [ESP + 0x38]          ; 00422b02
    FMUL float ptr [ESP + 0x5c]         ; 00422b06
    FADDP                               ; 00422b0a
    FLD float ptr [ESP + 0x40]          ; 00422b0c
    FMUL float ptr [ESP + 0x64]         ; 00422b10
    FADDP                               ; 00422b14
    FLDZ                                ; 00422b16
    FCOMPP                              ; 00422b18
    FNSTSW AX                           ; 00422b1a
    SAHF                                ; 00422b1c
    JA 0x00422b26                       ; 00422b1d
        ;   XREF to: 00422b26 (CONDITIONAL_JUMP)  ; LAB_00422b26
    MOV ESP,EBP                         ; 00422b1f
        ;   Label: LAB_00422b1f
    POP EBP                             ; 00422b21
    POP EDI                             ; 00422b22
    POP ESI                             ; 00422b23
    POP EBX                             ; 00422b24
    RET                                 ; 00422b25
    PUSH EBX                            ; 00422b26
        ;   Label: LAB_00422b26
    MOV EAX,dword ptr [EBX + 0x154]     ; 00422b27
    LEA ESI,[ESP + 0x24]                ; 00422b2d
    CALL dword ptr [EAX + 0x1c]         ; 00422b31
    ADD ESP,0x4                         ; 00422b34
    LEA EAX,[ESP + 0x44]                ; 00422b37
    PUSH EAX                            ; 00422b3b
    LEA EAX,[ESP + 0x3c]                ; 00422b3c
    LEA EDI,[ESP + 0xc]                 ; 00422b40
    PUSH EAX                            ; 00422b44
    LEA EAX,[ESP + 0x64]                ; 00422b45
    MOV ECX,0x6                         ; 00422b49
    PUSH EAX                            ; 00422b4e
    LEA EAX,[ESP + 0x14]                ; 00422b4f
    LEA ESI,[ESP + 0x2c]                ; 00422b53
    PUSH EAX                            ; 00422b57
    MOVSD.REP ES:EDI,ESI                ; 00422b58
    CALL core_box.cpp_FUN_00420ee0      ; 00422b5a
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 00422b5f
    FLD float ptr [ESP + 0xa0]          ; 00422b66
    ADD ESP,0x10                        ; 00422b6d
    FLDZ                                ; 00422b70
    FXCH                                ; 00422b72
    FSTP double ptr [ESP]               ; 00422b74
    FCOMP double ptr [ESP]              ; 00422b77
    FNSTSW AX                           ; 00422b7a
    SAHF                                ; 00422b7c
    JA 0x00422b1f                       ; 00422b7d
        ;   XREF to: 00422b1f (CONDITIONAL_JUMP)  ; LAB_00422b1f
    FLD1                                ; 00422b7f
    FCOMP double ptr [ESP]              ; 00422b81
    FNSTSW AX                           ; 00422b84
    SAHF                                ; 00422b86
    JBE 0x00422b1f                      ; 00422b87
        ;   XREF to: 00422b1f (CONDITIONAL_JUMP)  ; LAB_00422b1f
    FLD double ptr [0x005d4d60]         ; 00422b89 | DAT_005d4d60
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00422b8f
    FSUB double ptr [ESP]               ; 00422b92
    FLD float ptr [EAX]                 ; 00422b95
    FXCH                                ; 00422b97
    FSTP float ptr [ESP + 0x8c]         ; 00422b99
    FMUL float ptr [ESP + 0x8c]         ; 00422ba0
    FLD float ptr [EAX + 0x4]           ; 00422ba7
    FMUL float ptr [ESP + 0x8c]         ; 00422baa
    FLD float ptr [EAX + 0x8]           ; 00422bb1
    FMUL float ptr [ESP + 0x8c]         ; 00422bb4
    LEA EDI,[ESP + 0x74]                ; 00422bbb
    LEA ESI,[ESP + 0x80]                ; 00422bbf
    LEA EAX,[EBX + 0x20]                ; 00422bc6
    FXCH ST2                            ; 00422bc9
    FSTP float ptr [ESP + 0x80]         ; 00422bcb
    FSTP float ptr [ESP + 0x84]         ; 00422bd2
    FSTP float ptr [ESP + 0x88]         ; 00422bd9
    MOVSD ES:EDI,ESI                    ; 00422be0
    MOVSD ES:EDI,ESI                    ; 00422be1
    MOVSD ES:EDI,ESI                    ; 00422be2
    PUSH EBX                            ; 00422be3
    FLD float ptr [EAX]                 ; 00422be4
    FLD float ptr [EAX + 0x4]           ; 00422be6
    FLD float ptr [EAX + 0x8]           ; 00422be9
    FXCH ST2                            ; 00422bec
    FADD float ptr [ESP + 0x78]         ; 00422bee
    FXCH                                ; 00422bf2
    FADD float ptr [ESP + 0x7c]         ; 00422bf4
    FXCH ST2                            ; 00422bf8
    FADD float ptr [ESP + 0x80]         ; 00422bfa
    FXCH                                ; 00422c01
    FSTP float ptr [EAX]                ; 00422c03
    FXCH                                ; 00422c05
    FSTP float ptr [EAX + 0x4]          ; 00422c07
    FSTP float ptr [EAX + 0x8]          ; 00422c0a
    CALL core_boxactor.cpp_FUN_00421e80 ; 00422c0d
        ;   XREF to: 00421e80 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00421e80()
    ADD ESP,0x4                         ; 00422c12
    PUSH EBX                            ; 00422c15
    CALL core_boxactor.cpp_FUN_00422d10 ; 00422c16
        ;   XREF to: 00422d10 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00422d10()
    ADD ESP,0x4                         ; 00422c1b
    MOV ESP,EBP                         ; 00422c1e
    POP EBP                             ; 00422c20
    POP EDI                             ; 00422c21
    POP ESI                             ; 00422c22
    POP EBX                             ; 00422c23
    RET                                 ; 00422c24

