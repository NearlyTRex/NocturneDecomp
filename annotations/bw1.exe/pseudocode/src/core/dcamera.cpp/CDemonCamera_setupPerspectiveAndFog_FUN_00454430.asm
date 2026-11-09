; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; SProjectedVertex * Stack[0xc]:4   projected_vertex
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_box.cpp_FUN_004207b0 at 0042092f
;   core_set.cpp_FUN_00550580 at 0055089d
;
; Referenced Globals:
;   undefined4 DAT_005fe5fc
;   undefined4 DAT_00611230
;   undefined4 DAT_00611234
;   undefined4 DAT_00611238
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00b8199c
;   undefined4 DAT_01482658
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c51cac
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00454430
        ;   Label: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
    SUB ESP,0xc                         ; 00454431
    MOV ECX,dword ptr [ESP + 0x14]      ; 00454434
    MOV EAX,dword ptr [ESP + 0x18]      ; 00454438
    TEST EAX,EAX                        ; 0045443c
    JZ 0x00454456                       ; 0045443e
        ;   XREF to: 00454456 (CONDITIONAL_JUMP)  ; LAB_00454456
    CMP dword ptr [0x01482658],0x0      ; 00454440 | DAT_01482658
    JZ 0x00454460                       ; 00454447
        ;   XREF to: 00454460 (CONDITIONAL_JUMP)  ; LAB_00454460
    XOR EBP,EBP                         ; 00454449
    MOV dword ptr [0x01c51cac],EBP      ; 0045444b | DAT_01c51cac
    ADD ESP,0xc                         ; 00454451
    POP EBP                             ; 00454454
    RET                                 ; 00454455
    MOV [0x01c51cac],EAX                ; 00454456 | DAT_01c51cac
        ;   Label: LAB_00454456
    ADD ESP,0xc                         ; 0045445b
    POP EBP                             ; 0045445e
    RET                                 ; 0045445f
    PUSH EDI                            ; 00454460
        ;   Label: LAB_00454460
    PUSH ESI                            ; 00454461
    PUSH EBX                            ; 00454462
    LEA EBX,[ESP + 0xc]                 ; 00454463
    FLD float ptr [EAX]                 ; 00454467
    FMUL float ptr [0x005fe5fc]         ; 00454469 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 0045446f
    FLD float ptr [EAX + 0x4]           ; 00454471
    FMUL float ptr [0x005fe5fc]         ; 00454474 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 0045447a
    FLD float ptr [EAX + 0x8]           ; 0045447d
    FMUL float ptr [0x005fe5fc]         ; 00454480 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 00454486
    MOV EBX,dword ptr [ESP + 0x28]      ; 00454489
    PUSH EBX                            ; 0045448d
    LEA EDX,[ESP + 0x10]                ; 0045448e
    PUSH EDX                            ; 00454492
    MOV EAX,dword ptr [ECX + 0x3c]      ; 00454493
    PUSH ECX                            ; 00454496
    CALL dword ptr [EAX + 0x8]          ; 00454497
    MOV ECX,dword ptr [0x00611230]      ; 0045449a | DAT_00611230
    MOV ESI,EAX                         ; 004544a0
    MOV EAX,[0x00611238]                ; 004544a2 | DAT_00611238
    MOV EDI,dword ptr [0x0061b4a0]      ; 004544a7 | DAT_0061b4a0
    MOV EBX,dword ptr [ECX*0x4 + 0xb8189c] ; 004544ad | DAT_00b8199c
    MOV EDX,dword ptr [EAX*0x4 + 0xb8189c] ; 004544b4 | DAT_00b8199c
    MOV EAX,[0x00611234]                ; 004544bb | DAT_00611234
    ADD ESP,0xc                         ; 004544c0
    AND EBX,0xff                        ; 004544c3
    MOV EAX,dword ptr [EAX*0x4 + 0xb8189c] ; 004544c9 | DAT_00b8199c
    AND EDX,0xff                        ; 004544d0
    AND EAX,0xff                        ; 004544d6
    CMP EDI,0x20                        ; 004544db
    JNZ 0x00454512                      ; 004544de
        ;   XREF to: 00454512 (CONDITIONAL_JUMP)  ; LAB_00454512
    MOV CL,byte ptr [0x01c4e9d4]        ; 004544e0 | DAT_01c4e9d4
    SHL EBX,CL                          ; 004544e6
    MOV CL,byte ptr [0x01c4e9e0]        ; 004544e8 | DAT_01c4e9e0
    SHL EAX,CL                          ; 004544ee
    MOV CL,byte ptr [0x01c4e9ec]        ; 004544f0 | DAT_01c4e9ec
    OR EBX,EAX                          ; 004544f6
    SHL EDX,CL                          ; 004544f8
    MOV ECX,EBX                         ; 004544fa
    OR ECX,EDX                          ; 004544fc
        ;   Label: LAB_004544fc
    MOV dword ptr [0x01c51cac],ESI      ; 004544fe | DAT_01c51cac
    MOV dword ptr [0x01c51d1c],ECX      ; 00454504 | DAT_01c51d1c
    POP EBX                             ; 0045450a
    POP ESI                             ; 0045450b
    POP EDI                             ; 0045450c
    ADD ESP,0xc                         ; 0045450d
    POP EBP                             ; 00454510
    RET                                 ; 00454511
    MOV ECX,EBX                         ; 00454512
        ;   Label: LAB_00454512
    SHL EAX,0x8                         ; 00454514
    SHL ECX,0x10                        ; 00454517
    OR ECX,EAX                          ; 0045451a
    JMP 0x004544fc                      ; 0045451c
        ;   XREF to: 004544fc (UNCONDITIONAL_JUMP)  ; LAB_004544fc

