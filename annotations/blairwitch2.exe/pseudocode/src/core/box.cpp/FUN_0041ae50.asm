; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_box_cpp_FUN_0041ae50(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00 at 00543d32
;
; Referenced Globals:
;   undefined4 DAT_005cc4d5
;   undefined4 DAT_005cc4d9
;   undefined4 DAT_005f39d8
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141e4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e3c
;
; Called Functions:
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ae50
        ;   Label: core_box.cpp_FUN_0041ae50
    PUSH ESI                            ; 0041ae51
    PUSH EDI                            ; 0041ae52
    PUSH EBP                            ; 0041ae53
    MOV EBP,ESP                         ; 0041ae54
    SUB ESP,0x48                        ; 0041ae56
    AND ESP,0xfffffff8                  ; 0041ae59
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ae5c
    MOV EDX,EAX                         ; 0041ae5f
    LEA EDI,[ESP + 0x24]                ; 0041ae61
    LEA ESI,[ESP + 0x18]                ; 0041ae65
    FLD float ptr [EDX]                 ; 0041ae69
    FLD float ptr [EDX + 0x4]           ; 0041ae6b
    FLD float ptr [EDX + 0x8]           ; 0041ae6e
    FXCH ST2                            ; 0041ae71
    FADD float ptr [EAX + 0xc]          ; 0041ae73
    FXCH                                ; 0041ae76
    FADD float ptr [EAX + 0x10]         ; 0041ae78
    FXCH ST2                            ; 0041ae7b
    FADD float ptr [EAX + 0x14]         ; 0041ae7d
    FXCH                                ; 0041ae80
    FSTP float ptr [ESP + 0x18]         ; 0041ae82
    FXCH                                ; 0041ae86
    FSTP float ptr [ESP + 0x1c]         ; 0041ae88
    FSTP float ptr [ESP + 0x20]         ; 0041ae8c
    MOVSD ES:EDI,ESI                    ; 0041ae90
    MOVSD ES:EDI,ESI                    ; 0041ae91
    MOVSD ES:EDI,ESI                    ; 0041ae92
    FLD float ptr [0x005cc4d5]          ; 0041ae93 | DAT_005cc4d5
    FLD float ptr [ESP + 0x24]          ; 0041ae99
    FMUL ST1                            ; 0041ae9d
    FLD float ptr [ESP + 0x28]          ; 0041ae9f
    FMUL ST2                            ; 0041aea3
    FLD float ptr [ESP + 0x2c]          ; 0041aea5
    FMULP ST3                           ; 0041aea9
    LEA EBX,[ESP + 0x30]                ; 0041aeab
    MOV EDX,dword ptr [0x0060b280]      ; 0041aeaf | DAT_0060b280
    MOV EAX,ESP                         ; 0041aeb5
    MOV EDI,ESP                         ; 0041aeb7
    LEA ESI,[ESP + 0xc]                 ; 0041aeb9
    FXCH                                ; 0041aebd
    FSTP float ptr [ESP + 0xc]          ; 0041aebf
    FSTP float ptr [ESP + 0x10]         ; 0041aec3
    FSTP float ptr [ESP + 0x14]         ; 0041aec7
    MOVSD ES:EDI,ESI                    ; 0041aecb
    MOVSD ES:EDI,ESI                    ; 0041aecc
    MOVSD ES:EDI,ESI                    ; 0041aecd
    FLD float ptr [EAX]                 ; 0041aece
    FMUL float ptr [0x005f39d8]         ; 0041aed0 | DAT_005f39d8
    FISTP dword ptr [EBX]               ; 0041aed6
    FLD float ptr [EAX + 0x4]           ; 0041aed8
    FMUL float ptr [0x005f39d8]         ; 0041aedb | DAT_005f39d8
    FISTP dword ptr [EBX + 0x4]         ; 0041aee1
    FLD float ptr [EAX + 0x8]           ; 0041aee4
    FMUL float ptr [0x005f39d8]         ; 0041aee7 | DAT_005f39d8
    FISTP dword ptr [EBX + 0x8]         ; 0041aeed
    LEA EAX,[ESP + 0x30]                ; 0041aef0
    PUSH EAX                            ; 0041aef4
    MOV EAX,dword ptr [EDX]             ; 0041aef5 | DAT_01ba5c50
    ADD EAX,0xea5d0                     ; 0041aef7
    PUSH EAX                            ; 0041aefc
    CALL engine_special.cpp_FUN_0055d723 ; 0041aefd
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0041af02 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0041af07 | DAT_01ba5c50
    MOV EAX,dword ptr [EAX + 0xea5d8]   ; 0041af09
    ADD ESP,0x8                         ; 0041af0f
    TEST EAX,EAX                        ; 0041af12
    JLE 0x0041af58                      ; 0041af14
        ;   XREF to: 0041af58 (CONDITIONAL_JUMP)  ; LAB_0041af58
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041af16
    FLD float ptr [EDX + 0x10]          ; 0041af19
    FSUB float ptr [EDX + 0x4]          ; 0041af1c
    MOV dword ptr [ESP + 0x44],EAX      ; 0041af1f
    FILD dword ptr [ESP + 0x44]         ; 0041af23
    FMUL double ptr [0x005cc4d9]        ; 0041af27 | DAT_005cc4d9
    FDIVP                               ; 0041af2d
    FILD dword ptr [0x01c35e3c]         ; 0041af2f | DAT_01c35e3c
    FMULP                               ; 0041af35
    FILD dword ptr [0x006141e4]         ; 0041af37 | DAT_006141e4
    FDIVP                               ; 0041af3d
    FABS                                ; 0041af3f
    FSTP float ptr [ESP + 0x3c]         ; 0041af41
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041af45
    MOV dword ptr [ESP + 0x40],EAX      ; 0041af49
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041af4d
    MOV ESP,EBP                         ; 0041af51
    POP EBP                             ; 0041af53
    POP EDI                             ; 0041af54
    POP ESI                             ; 0041af55
    POP EBX                             ; 0041af56
    RET                                 ; 0041af57
    MOV dword ptr [ESP + 0x40],0x47c34f80 ; 0041af58
        ;   Label: LAB_0041af58
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041af60
    MOV ESP,EBP                         ; 0041af64
    POP EBP                             ; 0041af66
    POP EDI                             ; 0041af67
    POP ESI                             ; 0041af68
    POP EBX                             ; 0041af69
    RET                                 ; 0041af6a

