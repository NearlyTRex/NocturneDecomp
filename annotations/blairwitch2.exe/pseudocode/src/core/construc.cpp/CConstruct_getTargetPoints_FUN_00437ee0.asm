; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_00437ee0(CConstruct *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007c254c
;   undefined4 DAT_007c2568
;   undefined4 DAT_007c256c
;   undefined4 DAT_007c2578
;   undefined4 DAT_007c2580
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437ee0
        ;   Label: core_construc.cpp_CConstruct_getTargetPoints_FUN_00437ee0
    PUSH ESI                            ; 00437ee1
    PUSH EDI                            ; 00437ee2
    PUSH EBP                            ; 00437ee3
    SUB ESP,0x78                        ; 00437ee4
    MOV EBP,dword ptr [ESP + 0x8c]      ; 00437ee7
    MOV EBX,dword ptr [ESP + 0x90]      ; 00437eee
    MOV EDX,dword ptr [0x007c254c]      ; 00437ef5 | DAT_007c254c
    PUSH EDX                            ; 00437efb
    LEA EAX,[EBP + 0x2b4]               ; 00437efc
    PUSH EAX                            ; 00437f02
    LEA ESI,[ESP + 0x20]                ; 00437f03
    LEA EDI,[ESP + 0x38]                ; 00437f07
    CALL core_skeleton.cpp_FUN_00546a90 ; 00437f0b
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x20]                ; 00437f10
    ADD ESP,0x8                         ; 00437f14
    LEA EAX,[ESP + 0x30]                ; 00437f17
    MOVSD ES:EDI,ESI                    ; 00437f1b
    MOVSD ES:EDI,ESI                    ; 00437f1c
    MOVSD ES:EDI,ESI                    ; 00437f1d
    CMP EBX,EAX                         ; 00437f1e
    JZ 0x00437f36                       ; 00437f20
        ;   XREF to: 00437f36 (CONDITIONAL_JUMP)  ; LAB_00437f36
    MOV EAX,dword ptr [ESP + 0x30]      ; 00437f22
    MOV dword ptr [EBX],EAX             ; 00437f26
    MOV EAX,dword ptr [ESP + 0x34]      ; 00437f28
    MOV dword ptr [EBX + 0x4],EAX       ; 00437f2c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00437f2f
    MOV dword ptr [EBX + 0x8],EAX       ; 00437f33
    MOV ECX,dword ptr [0x007c2568]      ; 00437f36 | DAT_007c2568
        ;   Label: LAB_00437f36
    PUSH ECX                            ; 00437f3c
    LEA EAX,[EBP + 0x2b4]               ; 00437f3d
    PUSH EAX                            ; 00437f43
    LEA ESI,[ESP + 0x68]                ; 00437f44
    LEA EDI,[ESP + 0x50]                ; 00437f48
    CALL core_skeleton.cpp_FUN_00546a90 ; 00437f4c
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x68]                ; 00437f51
    LEA EAX,[ESP + 0x50]                ; 00437f55
    ADD ESP,0x8                         ; 00437f59
    LEA EDX,[EBX + 0xc]                 ; 00437f5c
    MOVSD ES:EDI,ESI                    ; 00437f5f
    MOVSD ES:EDI,ESI                    ; 00437f60
    MOVSD ES:EDI,ESI                    ; 00437f61
    CMP EDX,EAX                         ; 00437f62
    JZ 0x00437f7a                       ; 00437f64
        ;   XREF to: 00437f7a (CONDITIONAL_JUMP)  ; LAB_00437f7a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00437f66
    MOV dword ptr [EDX],EAX             ; 00437f6a
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00437f6c
    MOV dword ptr [EDX + 0x4],EAX       ; 00437f70
    MOV EAX,dword ptr [ESP + 0x50]      ; 00437f73
    MOV dword ptr [EDX + 0x8],EAX       ; 00437f77
    MOV ESI,dword ptr [0x007c256c]      ; 00437f7a | DAT_007c256c
        ;   Label: LAB_00437f7a
    PUSH ESI                            ; 00437f80
    LEA EAX,[EBP + 0x2b4]               ; 00437f81
    PUSH EAX                            ; 00437f87
    LEA ESI,[ESP + 0x74]                ; 00437f88
    LEA EDI,[ESP + 0x5c]                ; 00437f8c
    CALL core_skeleton.cpp_FUN_00546a90 ; 00437f90
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x74]                ; 00437f95
    LEA EAX,[ESP + 0x5c]                ; 00437f99
    ADD ESP,0x8                         ; 00437f9d
    LEA EDX,[EBX + 0x18]                ; 00437fa0
    MOVSD ES:EDI,ESI                    ; 00437fa3
    MOVSD ES:EDI,ESI                    ; 00437fa4
    MOVSD ES:EDI,ESI                    ; 00437fa5
    CMP EDX,EAX                         ; 00437fa6
    JZ 0x00437fbe                       ; 00437fa8
        ;   XREF to: 00437fbe (CONDITIONAL_JUMP)  ; LAB_00437fbe
    MOV EAX,dword ptr [ESP + 0x54]      ; 00437faa
    MOV dword ptr [EDX],EAX             ; 00437fae
    MOV EAX,dword ptr [ESP + 0x58]      ; 00437fb0
    MOV dword ptr [EDX + 0x4],EAX       ; 00437fb4
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00437fb7
    MOV dword ptr [EDX + 0x8],EAX       ; 00437fbb
    MOV EDI,dword ptr [0x007c2578]      ; 00437fbe | DAT_007c2578
        ;   Label: LAB_00437fbe
    PUSH EDI                            ; 00437fc4
    LEA EAX,[EBP + 0x2b4]               ; 00437fc5
    PUSH EAX                            ; 00437fcb
    LEA ESI,[ESP + 0x44]                ; 00437fcc
    LEA EDI,[ESP + 0x14]                ; 00437fd0
    CALL core_skeleton.cpp_FUN_00546a90 ; 00437fd4
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x44]                ; 00437fd9
    LEA EAX,[ESP + 0x14]                ; 00437fdd
    ADD ESP,0x8                         ; 00437fe1
    LEA EDX,[EBX + 0x24]                ; 00437fe4
    MOVSD ES:EDI,ESI                    ; 00437fe7
    MOVSD ES:EDI,ESI                    ; 00437fe8
    MOVSD ES:EDI,ESI                    ; 00437fe9
    CMP EDX,EAX                         ; 00437fea
    JZ 0x00438002                       ; 00437fec
        ;   XREF to: 00438002 (CONDITIONAL_JUMP)  ; LAB_00438002
    MOV EAX,dword ptr [ESP + 0xc]       ; 00437fee
    MOV dword ptr [EDX],EAX             ; 00437ff2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437ff4
    MOV dword ptr [EDX + 0x4],EAX       ; 00437ff8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437ffb
    MOV dword ptr [EDX + 0x8],EAX       ; 00437fff
    MOV EAX,[0x007c2580]                ; 00438002 | DAT_007c2580
        ;   Label: LAB_00438002
    PUSH EAX                            ; 00438007
    ADD EBP,0x2b4                       ; 00438008
    LEA ESI,[ESP + 0x4]                 ; 0043800e
    PUSH EBP                            ; 00438012
    LEA EDI,[ESP + 0x2c]                ; 00438013
    ADD EBX,0x30                        ; 00438017
    CALL core_skeleton.cpp_FUN_00546a90 ; 0043801a
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 0043801f
    ADD ESP,0x8                         ; 00438023
    LEA EAX,[ESP + 0x24]                ; 00438026
    MOVSD ES:EDI,ESI                    ; 0043802a
    MOVSD ES:EDI,ESI                    ; 0043802b
    MOVSD ES:EDI,ESI                    ; 0043802c
    CMP EBX,EAX                         ; 0043802d
    JNZ 0x0043803e                      ; 0043802f
        ;   XREF to: 0043803e (CONDITIONAL_JUMP)  ; LAB_0043803e
    MOV EAX,0x5                         ; 00438031
    ADD ESP,0x78                        ; 00438036
    POP EBP                             ; 00438039
    POP EDI                             ; 0043803a
    POP ESI                             ; 0043803b
    POP EBX                             ; 0043803c
    RET                                 ; 0043803d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043803e
        ;   Label: LAB_0043803e
    MOV dword ptr [EBX],EAX             ; 00438042
    MOV EAX,dword ptr [ESP + 0x28]      ; 00438044
    MOV dword ptr [EBX + 0x4],EAX       ; 00438048
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043804b
    MOV dword ptr [EBX + 0x8],EAX       ; 0043804f
    MOV EAX,0x5                         ; 00438052
    ADD ESP,0x78                        ; 00438057
    POP EBP                             ; 0043805a
    POP EDI                             ; 0043805b
    POP ESI                             ; 0043805c
    POP EBX                             ; 0043805d
    RET                                 ; 0043805e

