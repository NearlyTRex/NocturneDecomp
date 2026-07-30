; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strcmp_FUN_005649c0(char *str1,char *str2)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
;
; XREF[31]:
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 at 0040ed9f
;   core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 at 004386d0
;   core_curtain.cpp_CCurtain_process_FUN_0043ebf0 at 0043ec60
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 00443452
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50 at 00441c7a
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60 at 0044be79
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20 at 0044bd39
;   core_door.cpp_CDoor_setup_FUN_004551f0 at 0045521a
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004571f0 at 004572fd
;   core_emitter.cpp_CEmitter_process_FUN_00478790 at 004787b4
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EDX                            ; 005649c0
        ;   Label: crt_string.c__strcmp_FUN_005649c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005649c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005649c5
    PUSH EBX                            ; 005649c9
    PUSH ECX                            ; 005649ca
    MOV EBX,EAX                         ; 005649cb
    CMP EAX,EDX                         ; 005649cd
    JZ 0x00564a3d                       ; 005649cf
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    MOV EAX,dword ptr [EBX]             ; 005649d1
        ;   Label: LAB_005649d1
    MOV ECX,dword ptr [EDX]             ; 005649d3
    CMP ECX,EAX                         ; 005649d5
    JNZ 0x00564a43                      ; 005649d7
        ;   XREF to: 00564a43 (CONDITIONAL_JUMP)  ; LAB_00564a43
    NOT ECX                             ; 005649d9
    ADD EAX,0xfefefeff                  ; 005649db
    AND EAX,ECX                         ; 005649e0
    AND EAX,0x80808080                  ; 005649e2
    JNZ 0x00564a3d                      ; 005649e7
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    MOV EAX,dword ptr [EBX + 0x4]       ; 005649e9
    MOV ECX,dword ptr [EDX + 0x4]       ; 005649ec
    CMP ECX,EAX                         ; 005649ef
    JNZ 0x00564a43                      ; 005649f1
        ;   XREF to: 00564a43 (CONDITIONAL_JUMP)  ; LAB_00564a43
    NOT ECX                             ; 005649f3
    ADD EAX,0xfefefeff                  ; 005649f5
    AND EAX,ECX                         ; 005649fa
    AND EAX,0x80808080                  ; 005649fc
    JNZ 0x00564a3d                      ; 00564a01
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00564a03
    MOV ECX,dword ptr [EDX + 0x8]       ; 00564a06
    CMP ECX,EAX                         ; 00564a09
    JNZ 0x00564a43                      ; 00564a0b
        ;   XREF to: 00564a43 (CONDITIONAL_JUMP)  ; LAB_00564a43
    NOT ECX                             ; 00564a0d
    ADD EAX,0xfefefeff                  ; 00564a0f
    AND EAX,ECX                         ; 00564a14
    AND EAX,0x80808080                  ; 00564a16
    JNZ 0x00564a3d                      ; 00564a1b
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    MOV EAX,dword ptr [EBX + 0xc]       ; 00564a1d
    MOV ECX,dword ptr [EDX + 0xc]       ; 00564a20
    CMP ECX,EAX                         ; 00564a23
    JNZ 0x00564a43                      ; 00564a25
        ;   XREF to: 00564a43 (CONDITIONAL_JUMP)  ; LAB_00564a43
    ADD EBX,0x10                        ; 00564a27
    ADD EDX,0x10                        ; 00564a2a
    NOT ECX                             ; 00564a2d
    ADD EAX,0xfefefeff                  ; 00564a2f
    AND EAX,ECX                         ; 00564a34
    AND EAX,0x80808080                  ; 00564a36
    JZ 0x005649d1                       ; 00564a3b
        ;   XREF to: 005649d1 (CONDITIONAL_JUMP)  ; LAB_005649d1
    SUB EAX,EAX                         ; 00564a3d
        ;   Label: LAB_00564a3d
    POP ECX                             ; 00564a3f
    POP EBX                             ; 00564a40
    POP EDX                             ; 00564a41
    RET                                 ; 00564a42
    CMP AL,CL                           ; 00564a43
        ;   Label: LAB_00564a43
    JNZ 0x00564a64                      ; 00564a45
        ;   XREF to: 00564a64 (CONDITIONAL_JUMP)  ; LAB_00564a64
    CMP AL,0x0                          ; 00564a47
    JZ 0x00564a3d                       ; 00564a49
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    CMP AH,CH                           ; 00564a4b
    JNZ 0x00564a64                      ; 00564a4d
        ;   XREF to: 00564a64 (CONDITIONAL_JUMP)  ; LAB_00564a64
    CMP AH,0x0                          ; 00564a4f
    JZ 0x00564a3d                       ; 00564a52
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    SHR EAX,0x10                        ; 00564a54
    SHR ECX,0x10                        ; 00564a57
    CMP AL,CL                           ; 00564a5a
    JNZ 0x00564a64                      ; 00564a5c
        ;   XREF to: 00564a64 (CONDITIONAL_JUMP)  ; LAB_00564a64
    CMP AL,0x0                          ; 00564a5e
    JZ 0x00564a3d                       ; 00564a60
        ;   XREF to: 00564a3d (CONDITIONAL_JUMP)  ; LAB_00564a3d
    CMP AH,CH                           ; 00564a62
    SBB EAX,EAX                         ; 00564a64
        ;   Label: LAB_00564a64
    OR AL,0x1                           ; 00564a66
    POP ECX                             ; 00564a68
    POP EBX                             ; 00564a69
    POP EDX                             ; 00564a6a
    RET                                 ; 00564a6b

