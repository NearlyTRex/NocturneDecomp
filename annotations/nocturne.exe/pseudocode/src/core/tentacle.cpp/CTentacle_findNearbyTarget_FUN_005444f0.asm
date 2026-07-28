; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0(CTentacle *this_ptr,char *class_name)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_tentacle.cpp_FUN_00543c50 at 00543d33
;
; Referenced Globals:
;   double DOUBLE_005965e8 = 3
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa5f34
;   undefined4 DAT_01fa5f38
;   undefined4 DAT_01fa5f3c
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005444f0
        ;   Label: core_tentacle.cpp_CTentacle_findNearbyTarget_FUN_005444f0
    PUSH ESI                            ; 005444f1
    PUSH EDI                            ; 005444f2
    PUSH EBP                            ; 005444f3
    MOV EBP,ESP                         ; 005444f4
    SUB ESP,0x18                        ; 005444f6
    AND ESP,0xfffffff8                  ; 005444f9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005444fc
    XOR EDX,EDX                         ; 005444ff
    XOR EDI,EDI                         ; 00544501
    ADD ESI,0x20                        ; 00544503
    MOV dword ptr [ESP + 0x14],EDX      ; 00544506
    MOV EAX,[0x005be368]                ; 0054450a | DAT_005be368
        ;   Label: LAB_0054450a
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054450f
    CMP EBX,dword ptr [EAX + 0x14ecb0]  ; 00544513 | DAT_01fa5f34
    JGE 0x005445b2                      ; 00544519
        ;   XREF to: 005445b2 (CONDITIONAL_JUMP)  ; LAB_005445b2
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14ecb4] ; 0054451f | DAT_01fa5f38 | DAT_01fa5f3c
    CMP EBX,dword ptr [EBP + 0x14]      ; 00544526
    JNZ 0x00544539                      ; 00544529
        ;   XREF to: 00544539 (CONDITIONAL_JUMP)  ; LAB_00544539
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054452b
        ;   Label: LAB_0054452b
    INC ECX                             ; 0054452f
    ADD EDI,0x4                         ; 00544530
    MOV dword ptr [ESP + 0x14],ECX      ; 00544533
    JMP 0x0054450a                      ; 00544537
        ;   XREF to: 0054450a (UNCONDITIONAL_JUMP)  ; LAB_0054450a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00544539
        ;   Label: LAB_00544539
    PUSH EDX                            ; 0054453c
    PUSH EBX                            ; 0054453d
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0054453e
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00544543
    TEST EAX,EAX                        ; 00544546
    JZ 0x0054452b                       ; 00544548
        ;   XREF to: 0054452b (CONDITIONAL_JUMP)  ; LAB_0054452b
    LEA EAX,[EBX + 0x20]                ; 0054454a
    FLD float ptr [EAX]                 ; 0054454d
    FSUB float ptr [ESI]                ; 0054454f
    FSTP float ptr [ESP]                ; 00544551
    FLD float ptr [EAX + 0x4]           ; 00544554
    FSUB float ptr [ESI + 0x4]          ; 00544557
    FST float ptr [ESP + 0x4]           ; 0054455a
    FLD ST0                             ; 0054455e
    FMUL double ptr [0x005965e8]        ; 00544560 | DOUBLE_005965e8
    FLD float ptr [EAX + 0x8]           ; 00544566
    FSUB float ptr [ESI + 0x8]          ; 00544569
    FXCH                                ; 0054456c
    FSTP ST2                            ; 0054456e
    FXCH                                ; 00544570
    FST float ptr [ESP + 0x4]           ; 00544572
    FMUL float ptr [ESP + 0x4]          ; 00544576
    FLD float ptr [ESP]                 ; 0054457a
    FMUL ST0                            ; 0054457d
    FADDP                               ; 0054457f
    FXCH                                ; 00544581
    FST float ptr [ESP + 0x8]           ; 00544583
    FMUL float ptr [ESP + 0x8]          ; 00544587
    FADDP                               ; 0054458b
    FSQRT                               ; 0054458d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054458f
    FCOMP float ptr [EAX + 0xbc9c]      ; 00544592
    FNSTSW AX                           ; 00544598
    SAHF                                ; 0054459a
    JNC 0x0054452b                      ; 0054459b
        ;   XREF to: 0054452b (CONDITIONAL_JUMP)  ; LAB_0054452b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054459d
    MOV dword ptr [EAX + 0xbca4],EBX    ; 005445a0
    MOV EAX,0x1                         ; 005445a6
    MOV ESP,EBP                         ; 005445ab
    POP EBP                             ; 005445ad
    POP EDI                             ; 005445ae
    POP ESI                             ; 005445af
    POP EBX                             ; 005445b0
    RET                                 ; 005445b1
    XOR EAX,EAX                         ; 005445b2
        ;   Label: LAB_005445b2
    MOV ESP,EBP                         ; 005445b4
    POP EBP                             ; 005445b6
    POP EDI                             ; 005445b7
    POP ESI                             ; 005445b8
    POP EBX                             ; 005445b9
    RET                                 ; 005445ba

