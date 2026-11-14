; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0045af60(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   reference_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_005376e0 at 005379f4
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045af60
        ;   Label: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0045af60
    PUSH ESI                            ; 0045af61
    PUSH EDI                            ; 0045af62
    PUSH EBP                            ; 0045af63
    SUB ESP,0x30                        ; 0045af64
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045af67
    MOV ESI,dword ptr [ESP + 0x48]      ; 0045af6b
    MOV EBP,dword ptr [ESP + 0x50]      ; 0045af6f
    LEA EAX,[EBX + 0x24]                ; 0045af73
    LEA EDI,[ESP + 0x24]                ; 0045af76
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0045af7a
    FLD float ptr [EAX + 0x4]           ; 0045af7e
    FLD float ptr [EAX + 0x8]           ; 0045af81
    FLD float ptr [EAX]                 ; 0045af84
    LEA EAX,[ESP + 0x24]                ; 0045af86
    FSUB float ptr [ESI]                ; 0045af8a
    FXCH ST2                            ; 0045af8c
    FSUB float ptr [ESI + 0x4]          ; 0045af8e
    FXCH                                ; 0045af91
    FSUB float ptr [ESI + 0x8]          ; 0045af93
    FXCH ST2                            ; 0045af96
    FSTP float ptr [ESP + 0x18]         ; 0045af98
    FSTP float ptr [ESP + 0x1c]         ; 0045af9c
    LEA ESI,[ESP + 0x18]                ; 0045afa0
    FSTP float ptr [ESP + 0x20]         ; 0045afa4
    PUSH EAX                            ; 0045afa8
    MOVSD ES:EDI,ESI                    ; 0045afa9
    MOVSD ES:EDI,ESI                    ; 0045afaa
    MOVSD ES:EDI,ESI                    ; 0045afab
    PUSH EDX                            ; 0045afac
    LEA ESI,[ESP + 0x14]                ; 0045afad
    LEA EDI,[ESP + 0x8]                 ; 0045afb1
    CALL core_dirmat.cpp_FUN_0045b870   ; 0045afb5
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x14]                ; 0045afba
    ADD ESP,0x8                         ; 0045afbe
    MOVSD ES:EDI,ESI                    ; 0045afc1
    MOVSD ES:EDI,ESI                    ; 0045afc2
    MOVSD ES:EDI,ESI                    ; 0045afc3
    MOV EAX,ESP                         ; 0045afc4
    LEA ESI,[ESP + 0x24]                ; 0045afc6
    CMP ESI,EAX                         ; 0045afca
    JNZ 0x0045b041                      ; 0045afcc
        ;   XREF to: 0045b041 (CONDITIONAL_JUMP)  ; LAB_0045b041
    FLD float ptr [ESP + 0x24]          ; 0045afd2
        ;   Label: LAB_0045afd2
    FADD float ptr [EBX + 0x30]         ; 0045afd6
    FCOMP float ptr [EBP]               ; 0045afd9
    FNSTSW AX                           ; 0045afdc
    SAHF                                ; 0045afde
    JC 0x0045b037                       ; 0045afdf
        ;   XREF to: 0045b037 (CONDITIONAL_JUMP)  ; LAB_0045b037
    FLD float ptr [ESP + 0x28]          ; 0045afe1
    FADD float ptr [EBX + 0x30]         ; 0045afe5
    FCOMP float ptr [EBP + 0x4]         ; 0045afe8
    FNSTSW AX                           ; 0045afeb
    SAHF                                ; 0045afed
    JC 0x0045b037                       ; 0045afee
        ;   XREF to: 0045b037 (CONDITIONAL_JUMP)  ; LAB_0045b037
    FLD float ptr [ESP + 0x2c]          ; 0045aff0
    FADD float ptr [EBX + 0x30]         ; 0045aff4
    FCOMP float ptr [EBP + 0x8]         ; 0045aff7
    FNSTSW AX                           ; 0045affa
    SAHF                                ; 0045affc
    JC 0x0045b037                       ; 0045affd
        ;   XREF to: 0045b037 (CONDITIONAL_JUMP)  ; LAB_0045b037
    FLD float ptr [ESP + 0x24]          ; 0045afff
    FSUB float ptr [EBX + 0x30]         ; 0045b003
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b006
    FCOMP float ptr [EAX]               ; 0045b00a
    FNSTSW AX                           ; 0045b00c
    SAHF                                ; 0045b00e
    JA 0x0045b037                       ; 0045b00f
        ;   XREF to: 0045b037 (CONDITIONAL_JUMP)  ; LAB_0045b037
    FLD float ptr [ESP + 0x28]          ; 0045b011
    FSUB float ptr [EBX + 0x30]         ; 0045b015
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b018
    FCOMP float ptr [EAX + 0x4]         ; 0045b01c
    FNSTSW AX                           ; 0045b01f
    SAHF                                ; 0045b021
    JA 0x0045b037                       ; 0045b022
        ;   XREF to: 0045b037 (CONDITIONAL_JUMP)  ; LAB_0045b037
    FLD float ptr [ESP + 0x2c]          ; 0045b024
    FSUB float ptr [EBX + 0x30]         ; 0045b028
    MOV EAX,dword ptr [ESP + 0x54]      ; 0045b02b
    FCOMP float ptr [EAX + 0x8]         ; 0045b02f
    FNSTSW AX                           ; 0045b032
    SAHF                                ; 0045b034
    JBE 0x0045b05d                      ; 0045b035
        ;   XREF to: 0045b05d (CONDITIONAL_JUMP)  ; LAB_0045b05d
    XOR EAX,EAX                         ; 0045b037
        ;   Label: LAB_0045b037
    ADD ESP,0x30                        ; 0045b039
    POP EBP                             ; 0045b03c
    POP EDI                             ; 0045b03d
    POP ESI                             ; 0045b03e
    POP EBX                             ; 0045b03f
    RET                                 ; 0045b040
    MOV EAX,dword ptr [ESP]             ; 0045b041
        ;   Label: LAB_0045b041
    MOV dword ptr [ESP + 0x24],EAX      ; 0045b044
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b048
    MOV dword ptr [ESP + 0x28],EAX      ; 0045b04c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045b050
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045b054
    JMP 0x0045afd2                      ; 0045b058
        ;   XREF to: 0045afd2 (UNCONDITIONAL_JUMP)  ; LAB_0045afd2
    MOV EAX,0x1                         ; 0045b05d
        ;   Label: LAB_0045b05d
    ADD ESP,0x30                        ; 0045b062
    POP EBP                             ; 0045b065
    POP EDI                             ; 0045b066
    POP ESI                             ; 0045b067
    POP EBX                             ; 0045b068
    RET                                 ; 0045b069

