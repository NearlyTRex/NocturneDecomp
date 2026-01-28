; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stairs_cpp_FUN_005ba700(void)
;
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stairs.cpp_FUN_005ba900 at 005baa5d
;
; Referenced Globals:
;   double DOUBLE_0065308a = 0.5
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba700
        ;   Label: core_stairs.cpp_FUN_005ba700
    PUSH ESI                            ; 005ba701
    PUSH EBP                            ; 005ba702
    SUB ESP,0x4c                        ; 005ba703
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005ba706
    FLD double ptr [0x0065308a]         ; 005ba70a | DOUBLE_0065308a
    FLD float ptr [EBX + 0x160]         ; 005ba710
    FMUL ST1                            ; 005ba716
    FLD float ptr [EBX + 0x160]         ; 005ba718
    FCHS                                ; 005ba71e
    FMULP ST2                           ; 005ba720
    MOV EDX,dword ptr [EBX + 0x16c]     ; 005ba722
    XOR ESI,ESI                         ; 005ba728
    FSTP float ptr [ESP + 0x40]         ; 005ba72a
    FSTP float ptr [ESP + 0x44]         ; 005ba72e
    TEST EDX,EDX                        ; 005ba732
    JLE 0x005ba82b                      ; 005ba734
        ;   XREF to: 005ba82b (CONDITIONAL_JUMP)  ; LAB_005ba82b
    PUSH EDI                            ; 005ba73a
    LEA EDI,[EBX + 0x170]               ; 005ba73b
    LEA EBP,[EBX + 0x1a8]               ; 005ba741
    INC ESI                             ; 005ba747
        ;   Label: LAB_005ba747
    MOV dword ptr [ESP + 0x4c],ESI      ; 005ba748
    FILD dword ptr [ESP + 0x4c]         ; 005ba74c
    FLD float ptr [EBX + 0x158]         ; 005ba750
    FMUL ST1                            ; 005ba756
    FLD float ptr [EBX + 0x15c]         ; 005ba758
    FMULP ST2                           ; 005ba75e
    MOV EAX,dword ptr [ESP + 0x48]      ; 005ba760
    FSTP float ptr [ESP + 0x38]         ; 005ba764
    FSTP float ptr [ESP + 0x40]         ; 005ba768
    FLD float ptr [ESP + 0x38]          ; 005ba76c
    FLD float ptr [ESP + 0x40]          ; 005ba770
    FSUB float ptr [EBX + 0x168]        ; 005ba774
    FXCH                                ; 005ba77a
    FSUB float ptr [EBX + 0x164]        ; 005ba77c
    MOV dword ptr [ESP + 0x4],EAX       ; 005ba782
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ba786
    MOV dword ptr [ESP + 0x8],EAX       ; 005ba78a
    MOV EAX,dword ptr [ESP + 0x40]      ; 005ba78e
    MOV dword ptr [ESP + 0xc],EAX       ; 005ba792
    MOV EAX,dword ptr [ESP + 0x44]      ; 005ba796
    MOV dword ptr [ESP + 0x10],EAX      ; 005ba79a
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ba79e
    MOV dword ptr [ESP + 0x14],EAX      ; 005ba7a2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005ba7a6
    MOV dword ptr [ESP + 0x18],EAX      ; 005ba7aa
    MOV EAX,dword ptr [ESP + 0x44]      ; 005ba7ae
    FSTP float ptr [ESP + 0x3c]         ; 005ba7b2
    MOV dword ptr [ESP + 0x28],EAX      ; 005ba7b6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ba7ba
    FSTP float ptr [ESP + 0x34]         ; 005ba7be
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ba7c2
    MOV EAX,dword ptr [ESP + 0x34]      ; 005ba7c6
    MOV dword ptr [ESP + 0x30],EAX      ; 005ba7ca
    MOV EAX,dword ptr [ESP + 0x48]      ; 005ba7ce
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ba7d2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ba7d6
    MOV dword ptr [ESP + 0x20],EAX      ; 005ba7da
    MOV EAX,dword ptr [ESP + 0x34]      ; 005ba7de
    MOV dword ptr [ESP + 0x24],EAX      ; 005ba7e2
    LEA EAX,[ESP + 0x28]                ; 005ba7e6
    PUSH EAX                            ; 005ba7ea
    LEA EAX,[ESP + 0x14]                ; 005ba7eb
    PUSH EAX                            ; 005ba7ef
    LEA EAX,[ESP + 0xc]                 ; 005ba7f0
    PUSH EAX                            ; 005ba7f4
    PUSH EDI                            ; 005ba7f5
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005ba7f6
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005ba7fb
    LEA EAX,[ESP + 0x1c]                ; 005ba7fe
    PUSH EAX                            ; 005ba802
    LEA EAX,[ESP + 0x2c]                ; 005ba803
    PUSH EAX                            ; 005ba807
    LEA EAX,[ESP + 0xc]                 ; 005ba808
    PUSH EAX                            ; 005ba80c
    PUSH EBP                            ; 005ba80d
    ADD EDI,0x70                        ; 005ba80e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 005ba811
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005ba816
    MOV ECX,dword ptr [EBX + 0x16c]     ; 005ba819
    ADD EBP,0x70                        ; 005ba81f
    CMP ESI,ECX                         ; 005ba822
    JL 0x005ba747                       ; 005ba824
        ;   XREF to: 005ba747 (CONDITIONAL_JUMP)  ; LAB_005ba747
    POP EDI                             ; 005ba82a
    ADD ESP,0x4c                        ; 005ba82b
        ;   Label: LAB_005ba82b
    POP EBP                             ; 005ba82e
    POP ESI                             ; 005ba82f
    POP EBX                             ; 005ba830
    RET                                 ; 005ba831

